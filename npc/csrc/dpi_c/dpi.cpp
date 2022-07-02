#include "ver_sim.h"
#include "mem.h"

uint64_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  for(int i=0; i<32; i++){
      npc_cpu.gpr[i] = cpu_gpr[i];
  }
  npc_cpu.pc = cpu_gpr[32];
}

void set_npc_state(int state, int halt_ret);

void sim_ebreak(){
    //printf("***********************ebreak*****************************\n");
    if(npc_cpu.gpr[10] != 0) set_npc_state(NPC_END,-1);
    else set_npc_state(NPC_END,0);
    //exit_npc(npc_exit_flag);
}

void invalid_inst_o(){
  printf("%s at pc = %08lx\n",ASNI_FMT("E*-->invalid opcode", ASNI_FG_RED),npc_cpu.pc);

  printf("There are two cases which will trigger this unexpected exception:\n"
      "1. The instruction at PC = %08lx is not implemented.\n"
      "2. Something is implemented incorrectly.\n",npc_cpu.pc);

  set_npc_state(NPC_ABORT, -1);
}

extern "C" void mem_read(long long raddr, long long *rdata){
  if( raddr < CONFIG_MBASE && raddr >= CONFIG_MBASE + CONFIG_MSIZE) {
    ptintf("Read mem address = %lx is out of bound of mem.\n", raddr);
    return;
  }
  
  *rdata = *(long long *)npc_guest_mem(raddr);
  return;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask){
  if( waddr < CONFIG_MBASE && waddr >= CONFIG_MBASE + CONFIG_MSIZE) {
    ptintf("Write mem address = %lx is out of bound of mem.\n", waddr);
    return;
  }

  uint8_t *mem_wr_pt = npc_guest_mem(long long waddr);

  for(int i=0; i<8; i++){
    if( wmask & 1) {
      *mem_wr_pt = wdata & 0xFF;
      wmask >> 1;
      wdata >> 8;
      mem_wr_pt++;
    }
  }

  return;
}