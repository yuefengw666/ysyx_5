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

//int idx;
#define len 10
static uint32_t choose(uint32_t n){
  return rand() % n;
}

static inline void gen_rand_expr(int l, int r) {
    int op;
    if (l == r)buf[l] = choose(10) + 48;
    else if (r == l + 1) {
        buf[l] = choose(9) + 1 + 48;
        buf[r] = choose(10) + 48;
    } else {
        switch (choose(2)) {
            case 0:
                op = l + 1 + choose(r - l - 1);
                gen_rand_expr(l, op - 1);
                static char ops[] = "+-*/";
                buf[op] = ops[choose(4)];
                gen_rand_expr(op + 1, r);
                break;
            default:
                buf[l] = '(';
                buf[r] = ')';
                gen_rand_expr(l + 1, r - 1);
                break;
        }
    }
}
/*
void gen_num(){
  char temp[15];
  sprintf(temp,"%d",rand()%101);
  for(int i=0; i <= strlen(temp); i++){
    buf[idx++] = temp[i];
  }
  if(strlen(temp)!=0){
    buf[idx++] = 'U';
  }
}

void gen_prts(int type){
  buf[idx++] = type;
}

void gen_space(void){
  int num = choose(2);
  for(int i=0; i<=num; i++){
    buf[idx++] = ' ';
  }
}

void gen_rand_op(void){
  switch(choose(4)){
    case 0: buf[idx++] = '+';break;
    case 1: buf[idx++] = '-';break;
    case 2: buf[idx++] = '*';break;
    case 3: buf[idx++] = '/';break;
  }
}

static inline void gen_rand_expr() {
  printf("in gen idx:%d\n",idx);
  printf("buf:%d\n",buf[idx]);
  //buf[0] = '\0';
  if(idx > l){
    //buf[idx++]='U';
    gen_num();
    return;
  }
  switch(choose(4)){
    case 0:gen_num(); gen_space();break;
    case 1:gen_prts('('); gen_space();gen_rand_expr(); gen_space();gen_prts(')');break;
    default:gen_rand_expr(); gen_space();gen_rand_op(); gen_space();gen_rand_expr(); break;
  }
}
*/

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf[0] = '\0';
    gen_rand_expr(0,len);
    //strcat(buf,"1 + 1");
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%d %s\n", result, buf);
  }
  return 0;
}
