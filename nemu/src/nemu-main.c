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
  //engine_start();

  return 0;//is_exit_status_bad();
}

void test_expr(){
  
  FILE * fp=fopen("../tools/gen-expr/input","r");
  char expression[70000];
  char *s_temp;
  char *str;
  int cnt=0;
  for(int i = 0;i < 1000;i++)
  {
    bool flag=true;
    
    expression[0]='\0';
    s_temp = fgets(expression,70000,fp);
    unsigned answer=0,ans;
    str = strtok(expression," ");
    sscanf(expression,"%u",&answer);
    str=expression+strlen(expression)+1;
    ans=expr(str,&flag);
    if(answer!=ans)
      printf("%d Wrong\n",i);
    else {
      cnt++;
      printf("correct %d\n",i);
    }
  
  }
  printf("%s,\n",s_temp);
  printf("correct number: %d\n",cnt);
}
