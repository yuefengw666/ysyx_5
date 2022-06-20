#include "npc_state.h"

const char *npc_regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void npc_regs_display(){
    int i;
    for(i=0; i<32; i++){
        printf("%s\t0x%08lx\t%lu\n",npc_regs[i], npc_cpu.gpr[i], npc_cpu.gpr[i]);
    }
    printf("pc\t0x%08lx\t%lu\n",npc_cpu.pc,npc_cpu.pc);
}

word_t npc_reg_str2val(const char *s, bool *success) {
  *success = true;

  for(int i=0; i<32; i++){
    if(strcmp(s,npc_regs[i])==0){
      return npc_cpu.gpr[i];
    }
  }
  *success = false;
  printf("convert error, invalid token of str.\n");
  return 0;
}