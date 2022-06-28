#include "ver_sim.h"

void init_monitor(int , char*[]);
#ifdef CONFIG_SDB
    void npc_sdb_mainloop();
#endif


int main(int argc, char**argv, char** env){

    sim_init();
    npc_reset();

    init_monitor(argc,argv);
    dut->inst_in = pmem(dut->pc);
    
    #ifdef CONFIG_SDB
        npc_sdb_mainloop();
    #else
        npc_run(-1);
    #endif
    //exit_npc(EXIT_SUCCESS);
}