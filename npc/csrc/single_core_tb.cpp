#include "ver_sim.h"

void init_monitor(int , char*[]);
#ifdef CONFIG_SDB
    void npc_sdb_mainloop();
#endif


int main(int argc, char**argv, char** env){

    sim_init();
    
    init_monitor(argc,argv);
    
    npc_reset();
    return 0;
    #ifdef CONFIG_SDB
        npc_sdb_mainloop();
    #else
        npc_run(-1);
    #endif
    //exit_npc(EXIT_SUCCESS);
    
}