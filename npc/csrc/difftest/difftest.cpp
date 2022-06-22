#include "npc_common.h"
#include "npc_state.h"
#include "mem.h"
#include "difftest-def.h"
#include <dlfcn.h>
#include "utils.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void(*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void(*)(uint64_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void(*)())dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("%s%s\n", ASNI_FMT("Differential testing: ",ASNI_FG_CYAN),ASNI_FMT("ON", ASNI_FG_GREEN));
  printf("The result of every instruction will be compared with %s. \n"
      "This will help you a lot for debugging, but also significantly reduce the performance. \n"
      "If it is not necessary, you can turn it off in menuconfig.\n", ref_so_file);

  ref_difftest_init();
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&npc_cpu, DIFFTEST_TO_REF);
}


bool isa_difftest_checkregs(NPC_CPU *ref_r, vaddr_t pc) {
  if(ref_r->pc != npc_cpu.pc) {
    printf("%s pc is different!\n",ASNI_FMT("DIFFTEST E*-->",ASNI_FG_RED));
    printf("%s:0x%08lx\n",ASNI_FMT("REF",ASNI_FG_GREEN),ref_r->pc);
    printf("%s:0x%08lx\n",ASNI_FMT("NPC",ASNI_FG_RED),npc_cpu.pc);
    return false;
  }
  
  for(int i=0; i<32; i++){
    if(ref_r->gpr[i] != npc_cpu.gpr[i]) {
      printf("%s gpr:[%s] is different!\n",ASNI_FMT("DIFFTEST E*-->",ASNI_FG_RED),npc_regs[i]);
      printf("%s:0x%08lx\n",ASNI_FMT("REF",ASNI_FG_GREEN),ref_r->gpr[i]);
      printf("%s:0x%08lx\n",ASNI_FMT("NPC",ASNI_FG_RED),npc_cpu.gpr[i]);
      return false;
    }
  }

  return true;
}

static void checkregs(NPC_CPU *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    npc_state.halt_ret = -1;
    //isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  NPC_CPU ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = %08lx  at pc = %08lx\n", ref_r.pc, pc);//panin of nemu -> printf
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&npc_cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size) { }
#endif
