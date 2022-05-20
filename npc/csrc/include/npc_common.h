#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0


typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

extern uint8_t pmem[CONFIG_MSIZE];

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

extern CPU_state npc_cpu;


// ----------- state -----------

enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;