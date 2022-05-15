#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_22040237_rv_single_cyc_cpu_top.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Dpi.h"

//#include "Vrv_single_cyc_cpu_top__027unit.h"
#include "include/npc_common.h"
#include "include/mem.h"

//word_t pmem_read(paddr_t addr);
//void pmem_write(paddr_t addr, word_t data);

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

Vysyx_22040237_rv_single_cyc_cpu_top *dut;
VerilatedVcdC *m_trace = NULL;

#define imm 0
#define rs1 0
#define funt3 0
#define rd 1
#define opcode_addi 19
#define opcode_ebreak 115

void ebreak(){
    printf("***********************ebreak*****************************\n");
    //m_trace->dump(sim_time);
    //m_trace->close();
    //printf("1\n");
    //delete dut;
    //printf("2\n");
    //exit(EXIT_FAILURE);
}

void dut_reset(Vysyx_22040237_rv_single_cyc_cpu_top *dut, vluint64_t &posedge_cnt){
    dut->rst = 0;
    if(posedge_cnt < 3){
        dut->rst = 1;
        //dut-inst_in = 0x00000000;
    }
}

int main(int argc, char**argv, char** env){

    pmem_write(0x80000000,(imm+1<<20) | (rs1<<15) | (funt3<<12) | (rd<<7) | opcode_addi);
    pmem_write(0x80000004,(imm+2<<20) | (rs1+1<<15) | (funt3<<12) | (rd<<7) | opcode_addi);
    pmem_write(0x80000008,(imm+3<<20) | (rs1+1<<15) | (funt3<<12) | (rd<<7) | opcode_addi);
    pmem_write(0x8000000c,(imm+1<<20) | (rs1<<15) | (funt3<<12) | (rd-1<<7) | opcode_ebreak);
    //instantiate top module
    Vysyx_22040237_rv_single_cyc_cpu_top *dut = new Vysyx_22040237_rv_single_cyc_cpu_top;

    //set up waveform
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5); //trace  5 level
    m_trace->open("./logs/wave.vcd");
    
    while(sim_time < MAX_SIM_TIME){
        //dut_reset(dut, sim_time);

        dut->clk ^= 1;
        dut->eval(); //evaluate all the signals in design
        if(dut->clk == 1){
            posedge_cnt++;  //count posedge 
            dut_reset(dut, posedge_cnt);
            //switch(posedge_cnt){
                //case 3: 
                    //dut->inst_in = (1<<20) | (1<<15) | (0<<12) | (1<<7) | (19);
            if(posedge_cnt>=3){
                dut->inst_in = pmem_read(dut->pc);
                
                dut->eval();
            }
        }
        m_trace->dump(sim_time); //write all the traced signal values into our waveform dump file
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}