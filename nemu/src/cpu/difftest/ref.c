#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //nemu as ref
  printf("to ref addr%x:\n",addr);
  uint8_t *ref_mem = guest_to_host(addr);
  uint8_t *dut_mem = buf;

  if(direction == DIFFTEST_TO_DUT){
    for(int i=0; i<n; i++){
        *dut_mem = *ref_mem;
        ref_mem++;
        dut_mem++;
    }
  }
  else if(direction == DIFFTEST_TO_REF){
    for (int i = 0; i < n; i++)
    {
        *ref_mem = *dut_mem;
        ref_mem++;
        dut_mem++;
    }
  }
}

void difftest_regcpy(void *dut, bool direction) {
    CPU_state *reg_state = (CPU_state *)dut;
    if (direction == DIFFTEST_TO_DUT){//ref regs to dut
      reg_state->pc = cpu.pc;
      for(int i=0; i<32; i++){
        reg_state->gpr[i] = cpu.gpr[i];
      }
    }
    else if(direction == DIFFTEST_TO_REF){//dut_regs to ref
      cpu.pc = reg_state->pc;
      for(int i=0; i<32; i++){
        cpu.gpr[i] = reg_state->gpr[i];
      }
    }

  printf("pc : %lx after init diff_init\n",cpu.pc);
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
