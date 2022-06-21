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

void set_npc_state(int state, int halt_ret);

void ebreak(){
    printf("***********************ebreak*****************************\n");
    //int npc_exit_flag = 0;
    if(npc_cpu.gpr[10] != 0){
        //printf("regs[10]:%lx\n",npc_cpu.gpr[10]);
        //npc_exit_flag = 1;
        //printf("npc: %s at pc = %lx\n",ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED),npc_cpu.pc); 
        set_npc_state(NPC_END,-1);
    }
    else {
        set_npc_state(NPC_END,0);
        //printf("npc: %s at pc = %lx\n",ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN), npc_cpu.pc);
    }
    //exit_npc(npc_exit_flag);
}

void invalid_inst_o(){
  printf("%s at pc = %08lx\n",ASNI_FMT("invalid opcode", ASNI_FG_RED),npc_cpu.pc);

  printf("There are two cases which will trigger this unexpected exception:\n"
      "1. The instruction at PC = %08lx is not implemented.\n"
      "2. Something is implemented incorrectly.\n",npc_cpu.pc);

  set_npc_state(NPC_ABORT, -1);
}
/*
void set_npc_state(int state, int halt_ret){
    //difftest_skip_ref()
    npc_state.state = state;
    npc_state.halt_pc = npc_cpu.pc;
    npc_state.halt_ret = halt_ret;
}
*/