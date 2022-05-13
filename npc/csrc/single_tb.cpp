#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_22040237_rv_single_cyc_cpu_top.h"
//#include "Vrv_single_cyc_cpu_top__027unit.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

void dut_reset(Vysyx_22040237_rv_single_cyc_cpu_top *dut, vluint64_t &posedge_cnt){
    dut->rst = 0;
    if(posedge_cnt < 3){
        dut->rst = 1;
        //dut-inst_in = 0x00000000;
    }
}

int main(int argc, char**argv, char** env){
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
            switch(posedge_cnt){
                case 7: 
                    dut->inst_in = (1<<20) | (0<<15) | (0<<12) | (1<<7) | (19); 
                    break;
            }
        }
        m_trace->dump(sim_time); //write all the traced signal values into our waveform dump file
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}