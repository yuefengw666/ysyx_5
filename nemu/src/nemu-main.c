#include <common.h>
#include "./monitor/sdb/sdb.h"
#include <stdio.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

void test_expr();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  test_expr();

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}

void test_expr(){
  
  FILE * fp=fopen("../tools/gen-expr/input","r");
  char expression[70000];
  char *s_temp;
  char *str;
  int cnt=0;
  for(int i = 0;i < 949;i++)
  {
    bool flag=true;
    
    expression[0]='\0';
    s_temp = fgets(expression,70000,fp);
    uint64_t answer=0,ans;
    str = strtok(expression," ");
    sscanf(expression,"%lu",&answer);
    str=expression+strlen(expression)+1;
    str[strlen(str)] = '\0';
    ans=expr(str,&flag);
    if(answer!=ans)
      printf("!!!%d Wrong, expr:%s=%ld, ans_expr:%ld\n",i,str,answer,ans);
    else {
      cnt++;
      printf("%d correct,expr:%s=%ld, ans_expr:%ld\n",i,str,answer,ans);
    }
  
  }
  printf("expression:%s,\n",s_temp);
  printf("correct number: %d\n",cnt);
}
