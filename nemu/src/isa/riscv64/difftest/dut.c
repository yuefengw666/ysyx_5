#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char* regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if(ref_r->pc != cpu.pc) {
    printf("%s pc is different!\n",ASNI_FMT("DIFFTEST E*-->",ASNI_FG_RED));
    printf("%s :0x%08lx\n",ASNI_FMT("REF",ASNI_FG_GREEN),ref_r->pc);
    printf("%s:0x%08lx\n",ASNI_FMT("NEMU",ASNI_FG_RED),cpu.pc);
    return false;
  }
  
  for(int i=0; i<32; i++){
    if(ref_r->gpr[i] != cpu.gpr[i]) {
      printf("%s gpr:[%s] is different!\n",ASNI_FMT("DIFFTEST E*-->",ASNI_FG_RED),regs[i]);
      printf("%s: 0x%08lx\n",ASNI_FMT("REF",ASNI_FG_GREEN),ref_r->gpr[i]);
      printf("%s:0x%08lx\n",ASNI_FMT("NEMU",ASNI_FG_RED),cpu.gpr[i]);
      return false;
    }
  }

  return true;
}

void isa_difftest_attach() {
}
