#include "npc_state.h"

void npc_regs_display(){
    int i;
    for(i=0; i<32; i++){
        printf("%s\t0x%08lx\t%lu\n",npc_regs[i], npc_cpu.gpr[i], npc_cpu.gpr[i]);
    }
    printf("pc\t0x%08x\t%u\n",npc_cpu.pc,npc_cpu.pc);
}

word_t npc_reg_str2val(const char *s, bool *success) {
  *success = true;

  for(int i=0; i<32; i++){
    if(strcmp(s,npc_regs[i])==0){
      return npc_cpu_gpr[i];
    }
  }
  *success = false;
  printf("convert error, invalid token of str.\n");
  return 0;
}