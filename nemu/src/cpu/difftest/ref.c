#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //assert(0);
  if(direction == DIFFTEST_TO_DUT){
    buf = (void *)guest_to_host(addr);
  }
  else if(direction == DIFFTEST_TO_REF){
    Log("%x,%lx", addr, n);
    char *buf_char = (char *)buf;
    for (int i = 0; i < n; i++)
    {
      paddr_write(addr + i, 1, buf_char[i]);
    }
  }
}

void difftest_regcpy(void *dut, bool direction) {
  //assert(0);
    if (direction == DIFFTEST_TO_DUT)
  {
    for (int i = 0; i < 32; i++)
      ((CPU_state *)dut)->gpr[i] = cpu.gpr[i];
    ((CPU_state *)dut)->pc = cpu.pc;
  }
  else if (direction == DIFFTEST_TO_REF)
  {
    cpu = *(CPU_state *)dut;
  }
}

void difftest_exec(uint64_t n) {
  //assert(0);
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
