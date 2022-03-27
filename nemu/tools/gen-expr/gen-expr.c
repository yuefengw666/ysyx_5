#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int index = 0;
#define l = 10000;
static uint64_t choose(uint64_t n){
  return rand() % n;
}

void gen_num(){
  char temp[15];
  sprintf(temp,"%d",rand()%101);
  for(int i=0; i <= strlen(temp); i++){
    buf[++index] = temp[i];
  }
}

void gen_prts(int type){
  buf[++index] = type;
}

void gen_space(){
  int num = choose(2);
  for(int i=0; i<=num; i++){
    buf[++index] = ' ';
  }
}

void gen_rand_op(){
  switch(choose(4)){
    case 0: buf[++index] = '+';break;
    case 1: buf[++index] = '-';break;
    case 2: buf[++index] = '*';break;
    case 3: buf[++index] = '/';break;
  }
}

static inline void gen_rand_expr() {
  buf[0] = '\0';
  if(index > l){
    
    return;
  }
  switch(choose(3)){
    case 0:gen_num(); gen_space();break;
    case 1:gen_prts('('); gen_space();gen_rand_expr(); gen_space();gen_prts(')');break;
    default:gen_rand_expr(); gen_space();gen_rand_op(); gen_space();gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
