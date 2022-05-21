#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_22040237_rv_single_cyc_cpu_top.h"
#include "svdpi.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Dpi.h"
//#include "Vrv_single_cyc_cpu_top__027unit.h"
//transfer regs
#include "verilated_dpi.h"

#include "npc_common.h"
#include <utils.h>


//enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;
vluint64_t pos_cnt = 0;

static Vysyx_22040237_rv_single_cyc_cpu_top* dut;
VerilatedVcdC* m_trace = NULL;

//char *img_file = NULL;
//long img_size = 0;

NPCstate npc_state = { .state = NPC_STOP };
NPC_CPU npc_cpu;

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  for(int i=0; i<32; i++){
      npc_cpu.gpr[i] = cpu_gpr[i];
  }
}

void init_monitor(int , char*[]);

void npc_reset(){
    dut->rst = 1;
    for(int n=0; n<5; n++){
        dut->clk ^= 1; 
        dut->eval();
        if(dut->clk == 1){
            pos_cnt++;
            printf("pos_cnt:%ld\n",pos_cnt);
            if(pos_cnt >=3) dut->rst = 0;
        }
        if(dut->clk == 1 && dut->rst != 1){
            dut->inst_in = pmem_read(dut->pc);
            dut->eval();
        }
        m_trace->dump(sim_time);
        sim_time++;
    }
    //if(pos_cnt >= 1) dut->rst = 0;
}

void exit_npc(int flag){

    m_trace->dump(sim_time);
    m_trace->close();
    delete dut;
    exit(flag);
}

void ebreak(){
    printf("***********************ebreak*****************************\n");
    int npc_exit_flag = 0;
    if(npc_cpu.gpr[10] != 0){
        //printf("regs[10]:%lx\n",npc_cpu.gpr[10]);
        npc_exit_flag = 1;
        printf("npc: %s at pc = %x\n",ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED),dut->pc); 
    }
    else {
        printf("npc: %s at pc = %x\n",ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN), dut->pc);
    }
    exit_npc(npc_exit_flag);
}

void set_npc_state(int state){
    //difftest_skip_ref()
    npc_state.state = state;
    printf("parse??:%d\n",state);
    npc_state.halt_pc = dut->pc;
    //npc_state.halt_ret = halt_ret;
}

static void npc_sim_half(){
    dut->clk ^= 1;
    dut->eval();
    if(dut->clk == 1 && dut->rst != 1){
        dut->inst_in = pmem_read(dut->pc);
        dut->eval();
    }
    m_trace->dump(sim_time);
    sim_time++;
}

static void npc_sim_once(){
    npc_sim_half();
    npc_sim_half();
}

static void exec_once(){
    npc_sim_once();
    //ITRACE
    //......
}

static void execute(uint64_t n){
    for(; n > 0; n--){
        exec_once();
        //trace_and_difftest()
        if(npc_state.state != NPC_RUNNING) break;
    }
}

void npc_exec(uint64_t n){
    switch(npc_state.state){
        case NPC_END: case NPC_ABORT:
            printf("Program execution has ended.\n");
            return;
        default:npc_state.state = NPC_RUNNING;
    }
    
    execute(n);

    switch(npc_state.state){
        case NPC_RUNNING: npc_state.state = NPC_STOP;break;
        case NPC_ABORT:
        case NPC_END:
            printf("npc: %s at pc = %lx\n", ASNI_FMT("ABORT", ASNI_BG_RED),npc_state.halt_pc);
                //(npc_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
                //(npc_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
                //ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
                //npc_state.halt_pc); break;
    }
}


#define imm 0
#define rs1 0
#define funt3 0
#define rd 1
#define opcode_addi 19
#define opcode_ebreak 115
#define opcode_auipc 23
#define opcode_lui 55
#define opcode_jal 111
#define opcode_jalr 103


int main(int argc, char**argv, char** env){

    //**********single inst test**************
    pmem_write(0x80000000,(imm+1<<20) | (rs1<<15) | (funt3<<12) | (rd<<7) | opcode_addi);
    pmem_write(0x80000004,(imm+3<<20) | (rs1+1<<15) | (funt3<<12) | (rd<<7) | opcode_addi);
    //pmem_write(0x80000008,(imm<<20) | (rs1<<15) | (funt3+1<<12) | (rd+1<<7) | opcode_auipc);
    //pmem_write(0x8000000c,(imm<<20) | (rs1<<15) | (funt3+1<<12) | (rd+1<<7) | opcode_auipc);
    //pmem_write(0x80000010,(imm<<20) | (rs1<<15) | (funt3+1<<12) | (rd+2<<7) | opcode_lui);
    //pmem_write(0x80000014,(imm<<20) | (rs1<<15) | (funt3+2<<12) | (rd+2<<7) | opcode_lui);
    //pmem_write(0x80000008,(0<<31)|(2<<21) | (0<<20) | (0<<12) | (rd+3<<7) | opcode_jal); // pc = pc + 4(offset) reg4 = pc+4
    //pmem_write(0x8000000c,(0<<31)|(2<<21) | (0<<20) | (0<<12) | (rd+3<<7) | opcode_jal); // pc = pc + 4(offset) reg4 = pc+4
    //pmem_write(0x80000010,(imm+4<<20) | (rs1+4<<15) | (funt3<<12) | (rd<<7) | opcode_jalr); //pc = 4(imm) + reg4 reg1 = pc + 4 = c
    //pmem_write(0x80000014,(imm+4<<20) | (rs1+1<<15) | (funt3<<12) | (rd<<7) | opcode_jalr); //pc = 4(imm) + c(rs1:c) = 10 reg1 = pc + 4=10

    pmem_write(0x80000008,(imm+1<<20) | (rs1<<15) | (funt3<<12) | (rd-1<<7) | 64);
    pmem_write(0x8000000c,(imm+1<<20) | (rs1<<15) | (funt3<<12) | (rd-1<<7) | opcode_ebreak);


    Verilated::commandArgs(argc, argv);
    //instantiate top module
    //Vysyx_22040237_rv_single_cyc_cpu_top *dut = new Vysyx_22040237_rv_single_cyc_cpu_top;
    dut = new Vysyx_22040237_rv_single_cyc_cpu_top;

    //set up waveform
    Verilated::traceEverOn(true);
    //VerilatedVcdC *m_trace = new VerilatedVcdC;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace,99); //trace  99 level
    m_trace->open("./logs/wave.vcd");

    init_monitor(argc,argv);

    npc_reset();

    npc_exec(-1);
/*
    while(sim_time < MAX_SIM_TIME){
        //dut_reset(dut, sim_time);
        dut->clk ^= 1;
        dut->eval(); //evaluate all the signals in design
        if(dut->clk == 1){
            posedge_cnt++;  //count posedge 
            dut_reset(dut, sim_time);
            //switch(posedge_cnt){
                //case 3: 
                    //dut->inst_in = (1<<20) | (1<<15) | (0<<12) | (1<<7) | (19);
            if(dut->rst != 1){
                dut->inst_in = pmem_read(dut->pc);
                printf("current PC:%x\tinst:%x\n",dut->pc,dut->inst_in);
                dut->eval();
            }
        }
        //dut->eval();
        m_trace->dump(sim_time); //write all the traced signal values into our waveform dump file
        sim_time++;
    }
*/
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}