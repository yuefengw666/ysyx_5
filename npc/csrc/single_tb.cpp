#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_22040237_rv_single_cyc_cpu_top.h"
//#include "Vrv_single_cyc_cpu_top__027unit.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char**argv, char** env){
    //instantiate top module
    Vysyx_22040237_rv_single_cyc_cpu_top *dut = new Vrv_single_cyc_cpu_top;

    //set up waveform
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5); //trace  5 level
    m_trace->open("./logs/wave.vcd");
    
    while(sim_time < MAX_SIM_TIME){
        dut->clk ^= 1;
        dut->eval(); //evaluate all the signals in design
        m_trace->dump(sim_time); //write all the traced signal values into our waveform dump file
        sim_time++;
    }

    mtrace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}