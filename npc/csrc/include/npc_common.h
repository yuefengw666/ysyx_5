#ifndef __NPC_COMMON_H__
#define __NPC_COMMON_H__

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <cstring>
#include <cassert>
#include <macro.h>

//CONFIG
#define CONFIG_VCD 0
//#define CONFIG_SDB 0
//#define CONFIG_WATCHPOINT 0
#define CONFIG_DIFFTEST 0
#define CONFIG_MTRACE   0

#define CONFIG_ITRACE 0
#define CONFIG_TRACE_START 0
#define CONFIG_TRACE_END 10000

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)

typedef uint64_t word_t;
typedef word_t vaddr_t;
typedef uint32_t paddr_t;

#endif
