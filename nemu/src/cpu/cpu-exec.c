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

#define IRB_SIZE 8
#define IRB_LENGTH 128

char iringbuf[IRB_SIZE][IRB_LENGTH];
//unsigned int head=0;
unsigned int tail=0;
int error_inst_pos = -1;

static void iringbuf_wr(char *data_wr){
  //long wr_pos = tail % size;
  //printf("tail:%d\n",tail);
  strncpy(iringbuf[tail%IRB_SIZE], data_wr, IRB_LENGTH);
  tail++;
}

static void iringbuf_display(){
  if(tail < IRB_SIZE){
    for(int i=0; i<=tail; i++){
    if(i == error_inst_pos%IRB_SIZE) printf("%s%s\n", ASNI_FMT("E*-->\t",ASNI_FG_RED),iringbuf[i]);
    else printf("\t%s\n",iringbuf[i]);
    }
  }
  else {
    for(int j=tail%IRB_SIZE;j<IRB_SIZE;j++){
      if(j == error_inst_pos%IRB_SIZE) printf("%s%s\n",ASNI_FMT("   E*-->",ASNI_FG_RED),iringbuf[j]);
      else printf("\t%s\n",iringbuf[j]);
    }
    for(int k=0; k<tail%IRB_SIZE; k++){
      if(k == error_inst_pos%IRB_SIZE) printf("%s%s\n",ASNI_FMT("   E*-->",ASNI_FG_RED),iringbuf[k]);
      else printf("\t%s\n",iringbuf[k]);
    }
  }
  /*for(int i=0; i<IRB_SIZE; i++){
    if((i + 1)==error_inst_pos) printf("error-->iringbuf:%s\n",iringbuf[i]);
    else printf("iringbuf:%s\n",iringbuf[i]);
  }*/
} 
/*typedef struct 
{
  char (*buf)[128];
  unsigned int size;
  unsigned int head;
  unsigned int tail;
}RINGBUF;

int ringbuf_int(RINGBUF *ringbuf, char (*bufptr)[128], unsigned int ibr_size){
  printf("111\n");
  ringbuf->buf = bufptr;
  //memset(ringbuf->buf,0,IRB_LENGTH);
  printf("222\n");
  ringbuf->size = ibr_size;
  printf("after size\n");
  ringbuf->head = 0;
  ringbuf->tail = 0;
  //ringbuf->buf = bufptr;

  return 0;
}

int ringbuf_free(RINGBUF *ringbuf){
  free(ringbuf->buf);
  return 0;
}

int ringbuf_push(RINGBUF *ringbuf, char *str_in){
  //ringbuf->buf += snprintf(ringbuf->buf, IRB_LENGTH, "%s", str_in);
  memcpy(ringbuf->buf[ringbuf->tail], str_in, IRB_LENGTH);
  ringbuf->tail = (ringbuf->tail+1) % ringbuf->size;
  return 0;
}

int ringbuf_poll(RINGBUF *ringbuf, char str_out){
  str_out;
}
*/
/*
void ringbuf_display(RINGBUF *ringbuf){
  unsigned head = ringbuf->head;
  unsigned tail = ringbuf->tail;
  unsigned size = ringbuf->size;

  while(head != tail){
    printf("ringbuf:%s\n",ringbuf->buf[head]);
    head = (head + 1) % size;
  }
  return;
}*/
/*
char iringbuf[IRB_SIZE][IRB_LENGTH]={};
RINGBUF ir, *iring;
iring = &ir;
*/
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
    error_inst_pos++;
  }//add some inst befer bad inst
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

//Parse the instruction after the error instruction.
static void parse_more_inst(Decode *s, vaddr_t pc){
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  //s->isa.inst.val = inst_fetch(&s->snpc, 4);
  cpu.pc = s->dnpc;
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
  iringbuf_wr(s->logbuf);
#endif
}


static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if(nemu_state.state  == NEMU_ABORT){
      parse_more_inst(&s,cpu.pc);
      //cpu.pc += 4;
      //parse_more_inst(&s,cpu.pc);
      //cpu.pc += 4;
      //parse_more_inst(&s,cpu.pc);
      //cpu.pc += 4;
      //parse_more_inst(&s,cpu.pc);
      //parse_more_inst(&s,cpu.pc);
    }
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
 //add some inst after bad inst;
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    case NEMU_ABORT:iringbuf_display();
    case NEMU_END:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
