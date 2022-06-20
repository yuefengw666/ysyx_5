#include "ver_sim.h"
/*
#include "svdpi.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Dpi.h"
#include "verilated_dpi.h"  //transfer regs
#include "npc_state.h"
*/
uint64_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  for(int i=0; i<32; i++){
      npc_cpu.gpr[i] = cpu_gpr[i];
  }
  npc_cpu.pc = cpu_gpr[32];
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
    //printf("parse??:%d\n",state);
    npc_state.halt_pc = npc_cpu.pc;
    //npc_state.halt_ret = halt_ret;
}
