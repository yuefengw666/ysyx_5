#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char* regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i=0; i<32; i++){
    if(ref_r->gpr[i] != cpu.gpr[i]) {
      printf("Difftest %s at gpr:%s!",ASNI_FMT("E*-->",ASNI_FG_RED),regs[i]);
      printf("%s:%08lx\n",ASNI_FMT("REF",ASNI_FG_GREEN),ref_r->gpr[i]);
      printf("%s:%08lx\n",ASNI_FMT("NEMU",ASNI_FG_RED),cpu.gpr[i]);
      return false;
    }
  }

  if(ref_r->pc != cpu.pc) return false;

  return true;
}

void isa_difftest_attach() {
}
