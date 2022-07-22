#include "ver_sim.h"
#include "mem.h"

uint64_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  for(int i=0; i<32; i++){
      npc_cpu.gpr[i] = cpu_gpr[i];
  }
  npc_cpu.pc = cpu_gpr[32];
}

void set_npc_state(int state, int halt_ret);

void sim_ebreak(){
    //printf("***********************ebreak*****************************\n");
    if(npc_cpu.gpr[10] != 0) set_npc_state(NPC_END,-1);
    else set_npc_state(NPC_END,0);
    //exit_npc(npc_exit_flag);
}

void invalid_inst_o(){
  printf("%s at pc = %08lx\n",ASNI_FMT("E*-->invalid opcode", ASNI_FG_RED),npc_cpu.pc);

  printf("There are two cases which will trigger this unexpected exception:\n"
      "1. The instruction at PC = %08lx is not implemented.\n"
      "2. Something is implemented incorrectly.\n",npc_cpu.pc);

  set_npc_state(NPC_ABORT, -1);
}


uint64_t get_time();
static uint8_t serial_base[8];
//static uint32_t rtc_port_base[8];

extern "C" void mem_read(long long raddr, long long *rdata){
  #ifdef CONFIG_MTRACE
    printf("%s",ASNI_FMT("Mtrace-l -> ",ASNI_FG_CYAN));
    printf("raddr:%016llx, rdata:%016llx,\n",raddr,(*rdata));
  #endif
  
  if( raddr >= CONFIG_MBASE && raddr < CONFIG_MBASE + CONFIG_MSIZE) {
    *rdata = *(long long *)npc_guest_mem(raddr);
    return;
  }
  #ifdef CONFIG_HAS_TIMER
    if(raddr == CONFIG_RTC_MMIO){
      *rdata = get_time();
    }
  #endif

  printf("Read mem address = %llx is out of bound of mem.\n", raddr);
  return;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask){
  #ifdef CONFIG_MTRACE
    printf("%s",ASNI_FMT("Mtrace-s -> ",ASNI_FG_CYAN));
    printf("waddr:%016llx, wdata:%016llx, wlen_byte:%u \n",waddr,wdata,wlen_byte);
  #endif

  if( (waddr >= CONFIG_MBASE) && (waddr < CONFIG_MBASE + CONFIG_MSIZE) ){
    uint8_t *mem_wr_pt = npc_guest_mem(waddr);
    int wlen_byte = 0;
    for(int i=0; i<8; i++){
      if( wmask & 1) {
        *mem_wr_pt = (wdata >> (8*i)) & 0xFF;
        wmask = wmask >>1;//wmask >>=1;
        //wdata_sr = wdata_sr >> 8;//wdata >>=8;
        mem_wr_pt++;
        wlen_byte++;
      }
    }
    return;
  }

  #ifdef CONFIG_HAS_UART
    if(waddr == CONFIG_SERIAL_MMIO) {
      *serial_base = wdata;
      printf("%s", serial_base);
      return;
    }
  #endif
  
  printf("Write mem address = %llx is out of bound of mem.\n", waddr);
  return;
}
