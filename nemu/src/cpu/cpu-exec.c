#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <cpu/ifetch.h>

#include "../monitor/sdb/sdb.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

#ifdef CONFIG_ITRACE

#define IRB_SIZE 16
#define IRB_LENGTH 128

char iringbuf[IRB_SIZE][IRB_LENGTH];
//unsigned int head=0;
int tail=0;
//int error_inst_pos = -1;

static void iringbuf_wr(char *data_wr){
  //long wr_pos = tail % size;
  //printf("tail:%d\n",tail);
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

#ifdef CONFIG_FTRACE
  void ftrace(vaddr_t pc, vaddr_t dnpc, int pc_inst_opcode, int pc_inst_funct3);
  void ftrace_display();
#endif

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { 
    log_write("%s\n", _this->logbuf);
    iringbuf_wr(_this->logbuf);
  }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT 
  bool changed;
  changed = scan_wp();
  if(changed)
    nemu_state.state = NEMU_STOP;
#endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;

#ifdef CONFIG_FTRACE
  ftrace(s->pc,s->dnpc,BITS(s->isa.inst.val,6,0), BITS(s->isa.inst.val,14,12));
#endif

#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();
  
  execute(n);
  
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    case NEMU_ABORT:
    #ifdef CONFIG_ITRACE
      iringbuf_display();
    #endif
    case NEMU_END:
    #ifdef CONFIG_FTRACE
      ftrace_display();
    #endif
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
