#include "ver_sim.h"
#include "sdb.h"

vluint64_t sim_time;
vluint64_t pos_cnt;

Vysyx_22040237_rv_single_cyc_cpu_top* dut;
#ifdef CONFIG_VCD
  VerilatedVcdC* m_trace = NULL;
#endif

NPC_CPU npc_cpu;
NPCstate npc_state = {.state = NPC_STOP};
uint64_t g_nr_guest_inst = 0; //Number of instructions executed



#ifdef CONFIG_ITRACE

#define IRB_SIZE 16
#define IRB_LENGTH 128

char iringbuf[IRB_SIZE][IRB_LENGTH];
int tail=0;

static void iringbuf_wr(char *data_wr){
  strncpy(iringbuf[tail%IRB_SIZE], data_wr, IRB_LENGTH);
  tail++;
}

static void iringbuf_display(){
  printf("%s\n",ASNI_FMT("Error instruction apper in ...",ASNI_FG_CYAN));
  int error_inst_pos = ( tail - 1 ) % IRB_SIZE; 
  if( tail < (IRB_SIZE + 1) ){
    for(int i=0; i<= (tail-1); i++){
      if(i == error_inst_pos) printf("%s%s\n", ASNI_FMT("E*->",ASNI_FG_RED),iringbuf[i]);
      else printf("    %s\n",iringbuf[i]);
    }
  }
  else{
    for(int j=0; j<=IRB_SIZE; j++){
      if(j == error_inst_pos) printf("%s%s\n", ASNI_FMT("E*->",ASNI_FG_RED),iringbuf[j]);
      else printf("    %s\n",iringbuf[j]);
    }
  }
} 
#endif

void difftest_step(vaddr_t pc, vaddr_t npc);

static void trace_and_difftest(NPC_CPU *_this, vaddr_t dnpc){
//ITRACE
#ifdef CONFIG_ITRACE
    log_write("%s\n",_this->logbuf);
    iringbuf_wr(_this->logbuf);
#endif
//DIFFTEST
#ifdef CONFIG_DIFFTEST
    difftest_step(_this->pc, dnpc);
#endif

#ifdef CONFIG_WATCHPOINT 
  bool changed;
  changed = scan_wp();
  if(changed)
    npc_state.state = NPC_STOP;
#endif
}

void sim_init(){
    //instantiate top module
    dut = new Vysyx_22040237_rv_single_cyc_cpu_top;
    sim_time = 0;

    #ifdef CONFIG_VCD
    //set up waveform
    Verilated::traceEverOn(true);
    //VerilatedVcdC *m_trace = new VerilatedVcdC;
    m_trace = new VerilatedVcdC;
    dut->trace(m_trace,99); //trace  99 level
    m_trace->open("./build/wave.vcd");
    #endif
}

void npc_reset(){
    pos_cnt = 0;
    dut->rst = 1;
/*
    for(int i=0; i<4; i++){
        dut->clk ^= 1;
        dut->eval();
        #ifdef CONFIG_VCD
            m_trace->dump(sim_time);
        #endif
        sim_time++;
    }
    dut->rst = 0;
*/    
    for(int n=0; n<6; n++){
        dut->clk ^= 1; 
        dut->eval();
        if(dut->clk == 1){
            pos_cnt++;
            if(pos_cnt >=3) dut->rst = 0;
        }
        /*
        if(dut->rst != 1){
            dut->inst_in = pmem_read(dut->pc);
            dut->eval();
        }
        */
        #ifdef CONFIG_VCD
        m_trace->dump(sim_time);
        #endif
        sim_time++;
    }
        pos_cnt=0;
    
}

void exit_npc(int exit_flag){
    #ifdef CONFIG_VCD
    m_trace->dump(sim_time);
    m_trace->close();
    #endif
    delete dut;
    exit(exit_flag);
}

static void npc_sim_half(){

    dut->clk ^= 1;
    dut->eval();
    if( dut->clk == 1 && dut->rst != 1){
        dut->inst_in = pmem_read(dut->pc);
        dut->eval();
    }
    #ifdef CONFIG_VCD
        m_trace->dump(sim_time);
    #endif
    sim_time++;
}

static void npc_sim_once(){
    npc_sim_half();
    npc_sim_half();
}
void npc_regs_display();

static void exec_once(NPC_CPU *s){
    npc_sim_once();
    
    s->inst_val = dut->inst_in;
    #ifdef CONFIG_ITRACE
        char *p = s->logbuf;
        p += snprintf(p, sizeof(s->logbuf), "0x%016lx: ", s->pc);
        int ilen = 4;
        uint8_t *inst = (uint8_t *)&s->inst_val;
        for(int i=0; i<ilen; i++){
            p += snprintf(p, 4, " %02x", inst[i]);
        }
        //int ilen_max = 4;
        int space_len = 1;
        memset(p, ' ', space_len);
        p += space_len;

        void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
        disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
            s->pc, (uint8_t *)&s->inst_val, ilen);
    #endif
}

static void execute(uint64_t n){
    for(; n > 0; n--){
        exec_once(&npc_cpu);
        g_nr_guest_inst ++;
        trace_and_difftest(&npc_cpu, npc_cpu.pc);//npc_cpu.pc should dnpc ,but this arg not used yet.
        if(npc_state.state != NPC_RUNNING) break;
    }
}

void npc_run(uint64_t n){
    switch(npc_state.state){
        case NPC_END: case NPC_ABORT:
            printf("Program execution has ended.\n");
            return;
        default:npc_state.state = NPC_RUNNING;
    }

    execute(n);

    switch(npc_state.state){
        case NPC_RUNNING: npc_state.state = NPC_STOP;break;
        case NPC_ABORT:
        #ifdef CONFIG_ITRACE
            iringbuf_display();
        #endif
        case NPC_END:
          printf("%s %s at pc = %lx\n",ASNI_FMT("npc:",ASNI_FG_CYAN),
              (npc_state.state == NPC_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
               (npc_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
                ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
                npc_state.halt_pc);
            exit_npc(npc_state.halt_ret);//failure to exit
        case NPC_QUIT: exit_npc(EXIT_SUCCESS);
    }
}