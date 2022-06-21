#include "ver_sim.h"
#include "sdb.h"

vluint64_t sim_time;
vluint64_t pos_cnt;

static Vysyx_22040237_rv_single_cyc_cpu_top* dut;
VerilatedVcdC* m_trace = NULL;
NPC_CPU npc_cpu;
NPCstate npc_state = {.state = NPC_STOP};

void sim_init(){
    //instantiate top module
    dut = new Vysyx_22040237_rv_single_cyc_cpu_top;
    sim_time = 0;

    #ifdef CONFIG_VCD
    //set up waveform
    Verilated::traceEverOn(true);
    //VerilatedVcdC *m_trace = new VerilatedVcdC;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace,99); //trace  99 level
    m_trace->open("./logs/wave.vcd");
    #endif
}

void npc_reset(){
    pos_cnt = 0;
    dut->rst = 1;
    for(int n=0; n<5; n++){
        dut->clk ^= 1; 
        dut->eval();
        if(dut->clk == 1){
            pos_cnt++;
            //printf("pos_cnt:%ld\n",pos_cnt);
            if(pos_cnt >=3) dut->rst = 0;
        }
        if(dut->rst != 1){
            dut->inst_in = pmem_read(dut->pc);
            dut->eval();
        }
        #ifdef CONFIG_VCD
        m_trace->dump(sim_time);
        #endif
        sim_time++;
    }
}

void exit_npc(int exit_flag){
    #ifdef CONFIG_VCD
    m_trace->dump(sim_time);
    m_trace->close();
    #endif
    delete dut;
    exit(exit_flag);
}

static void trace_and_difftest(){
    //printf("current pc:%x\n",dut->pc);
//ITRACE

//DIFFTEST

#ifdef CONFIG_WATCHPOINT 
  bool changed;
  changed = scan_wp();
  if(changed)
    npc_state.state = NPC_STOP;
#endif
}

static void npc_sim_half(){

    dut->clk ^= 1;
    dut->eval();
    if( dut->clk == 1 && dut->rst != 1){
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
void npc_regs_display();

static void exec_once(){
    npc_sim_once();
    //printf("current npc_cpu.pc:%lx\n",npc_cpu.pc);
    //printf("current dut->pc:%x\n",dut->pc);
    //npc_regs_display();
    //ITRACE
}

static void execute(uint64_t n){
    for(; n > 0; n--){
        exec_once();
        trace_and_difftest();
        if(npc_state.state != NPC_RUNNING) break;
    }
}

void npc_run(uint64_t n){
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
          printf("npc: %s at pc = %lx\n",
              (npc_state.state == NPC_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
               (npc_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
                ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
                npc_state.halt_pc);
            //printf("npc: %s, invalid opcode at pc = %lx\n", ASNI_FMT("ABORT", ASNI_BG_RED),npc_state.halt_pc);
                //(npc_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
                //(npc_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
                //ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
                //npc_state.halt_pc); break;
            exit_npc(npc_state.halt_ret);//failure to exit
        case NPC_QUIT: exit_npc(EXIT_SUCCESS);
    }
}