#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

//expr
word_t expr(char *e, bool *success);

//wp
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr[256];
  word_t val;

} WP;

WP* new_wp(char *str);
void free_wp(WP *wp);
void info_wp();
void del_wp(int n);
bool scan_wp();

#endif
