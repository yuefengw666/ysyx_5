#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0


typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

//mem
extern uint8_t pmem[CONFIG_MSIZE];
uint8_t* guest_to_host(paddr_t paddr);
static inline word_t host_read(void *addr);
static inline void host_write(void *addr, word_t data);
word_t pmem_read(paddr_t addr);
void pmem_write(paddr_t addr, word_t data);


typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} NPC_CPUstate;

extern NPC_CPUstate npc_cpu;


// ----------- state -----------

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;
