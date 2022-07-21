#ifndef __DIFFTEST_DEF_H__
#define __DIFFTEST_DEF_H__

#include "npc_common.h"

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void init_difftest(char *ref_so_file, long img_size);
void difftest_step(vaddr_t pc, vaddr_t npc);

#ifdef CONFIG_DIFFTEST
    static inline void difftest_skip_ref();
#endif


#endif