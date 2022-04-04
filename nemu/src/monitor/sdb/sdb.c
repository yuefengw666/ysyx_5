#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  
  if(arg == NULL) cpu_exec(1);
  else {
    int num = atoi(arg);
    if(num <= 0) printf("Arguments error,should >= 1\n");
    else cpu_exec(num); 
  }
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");

  if(arg == NULL) {
    printf("No argument given,EX: info <r>/<w>\n");
    return 0;
  }
  
  if (strcmp(arg,"r") == 0) isa_reg_display();
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
        for(int j=3; j>=0; j--){
          word_t val = vaddr_read(addr + j,1);
          printf("0x%02lx  ",val);
        }
        printf("\n");
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
    printf("DEC:%ld\nHEX:0x%lx\n",val,val);
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

void sdb_mainloop() {
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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

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
