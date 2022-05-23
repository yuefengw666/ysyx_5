//#include <isa.h>
//#include <cpu/cpu.h>
#include "npc_common.h"
#include "readline/readline.h"
#include "readline/history.h"
#include "sdb.h"
#include "utils.h"
//#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void npc_exec(uint64_t n);
void npc_regs_display();
word_t pmem_read(paddr_t addr);

static std::string readline(int fd)
{
  struct termios tios;
  bool noncanonical = tcgetattr(fd, &tios) == 0 && (tios.c_lflag & ICANON) == 0;

  std::string s;
  for (char ch; read(fd, &ch, 1) == 1; )
  {
    if (ch == '\x7f')
    {
      if (s.empty())
        continue;
      s.erase(s.end()-1);

      if (noncanonical && write(fd, "\b \b", 3) != 3)
        ; // shut up gcc
    }
    else if (noncanonical && write(fd, &ch, 1) != 1)
      ; // shut up gcc

    if (ch == '\n')
      break;
    if (ch != '\x7f')
      s += ch;
  }
  return s;
}

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  npc_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  
  if(arg == NULL) {
    printf("execute 1 inst \n");
    npc_exec(1);
  }
  else {
    int num = atoi(arg);
    if(num <= 0) printf("Arguments error,should >= 1\n");
    else {
      printf("execute %d insts\n",num); 
      npc_exec(num);
    }
  }
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");

  if(arg == NULL) {
    printf("No argument given,EX: info <r>/<w>\n");
    return 0;
  }
  
  if (strcmp(arg,"r") == 0) npc_regs_display();
  else if(strcmp(arg,"w")==0) info_wp();
  
  return 0;
}

static int cmd_x(char *args){
  char *arg1 = strtok(NULL, " ");
  char *arg2 = strtok(NULL, " ");

  if(arg1 == NULL || arg2 == NULL){
    printf("Argument error, EX: x 10 $esp");
    return 0;
  }

  bool success;
  int n = atoi(arg1);
  paddr_t val_expr = 0x80000000;
  val_expr = expr(arg2,&success);
  if(success){
    for(int i=0; i<n; i++){
      int addr = i*4 + val_expr;
      printf("0x%08x\t",addr);
      word_t val = pmem_read(addr);
      printf("0x%08lx\n",val);
    }
  }
  else {
    printf("Bad expression.\n");
  }
  return 0;
}

static int cmd_p(char *args){
  char *arg = strtok(NULL," ");
  if(arg == NULL){
    printf("No expression given.\n");
    return 0;
  }

  bool success;
  word_t val = expr(args,&success);
  if(success){
    printf("DEC:%ld\nHEX:0x%08lx\n",val,val);
  }
  else {
    printf("expr return false\n");
    return 0;
  }
  return 0;
}

static int cmd_w(char *args){
  char *arg = strtok(NULL," ");
  if(arg == NULL){
    printf("No argument given.\n");
    return 0;
  }

  WP *p = new_wp(arg);
  printf("NO:%d, expr:%s\n",p->NO,p->expr);
  return 0;
}

static int cmd_d(char *args){
  char *arg = strtok(NULL," ");
  if(arg == NULL){
    printf("No argument given.\n");
    return 0;
  }

  int n = atoi(arg);
  if ((n < 0) || (n > 31)){
    printf("Argument error,shoule be [0,31].\n");
  }
  else {
    del_wp(n);
  }
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Format: help\t--Display informations about all supported commands.", cmd_help },
  { "c", "Format: c\t--Continue the execution of the program", cmd_c },
  { "q", "Format: q\t--Exit NEMU", cmd_q },
  { "si", "Format: si [N]\t--Single step.", cmd_si},
  { "info", "Format: info <r>/<w>\t--Info register or watchpoint status.", cmd_info},
  { "x", "Format: x N EXPR\t--Scan memory.", cmd_x},
  { "p", "Format: p EXPR\t--Expression evaluation.",cmd_p},
  { "w", "Format: w EXPR\t--Add express watchpoint.",cmd_w},
  { "d", "Format: d N\t--Delete watchpoint",cmd_d}
  /* TODO: Add more commands */

};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void npc_sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }
/*
#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif
*/
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { 
          return; 
        }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
