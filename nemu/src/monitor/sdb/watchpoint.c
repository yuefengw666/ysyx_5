#include "sdb.h"

#define NR_WP 32
/*
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  // TODO: Add more members if necessary
  char expr[256];
  word_t val;

} WP;
*/
static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

//Request a watchpoint struct from free_
WP* new_wp(char *str){
  if(free_ == NULL){
    printf("There is no free watchpoint in free_\n");
    return NULL;
  }
  
  WP *temp = free_;
  free_ = free_-> next;
  temp->next = head;
  head = temp;

  bool success = true;
  strcpy(head->expr, str);
  uint64_t result = expr(str,&success);
  if(!success){
    printf("Bad expression!\n");
    return NULL;
  }
  head->val = result;
  
  return head;
}

//Return the WP to free_
void free_wp(WP *wp){
  if(head == NULL){
    printf("There is no watchpoint to free in head");
  }
  else if (wp == head){
    head = head->next;
    wp->next = free_;
    free_ = wp;
    return;
  }
  
  WP *temp = head;
  while(temp->next != wp) temp = temp->next; //find ->wh 's node
  temp->next = wp->next;
  wp->next = free_;
  free_ = wp;
}

//Info wp
void info_wp(){
  if(head == NULL){
    printf("There is no wp\n");
    return;
  }
  
  WP *temp = head;
  printf("NO\tEXPR\tVALUE\n");
  while(temp!=NULL){
    printf("%2d\t%s\t%ld\n",temp->NO,temp->expr,temp->val);
    temp = temp->next;
  }
}

//Delete wp
void del_wp(int n){
  WP *temp = head;
  while(temp!=NULL){
    if(temp->NO == n){
      free_wp(temp);
      break;
    }
    temp = temp->next;
  }
  return;
}

bool scan_wp(){
  bool changed= false;

  WP *temp = head;
  while(temp!=NULL){
    bool success = true;
    word_t val_new = expr(temp->expr,&success);
    if(success==false){
      printf("Watchpoint new value calute error!\n");
      assert(0);
    }
    else{
      if(val_new != temp->val){
        printf("Watchpoint NO%d:%s\n",temp->NO,temp->expr);
        printf("Old value:%ld\n",temp->val);
        printf("New value:%ld\n",val_new);
        changed = true;
        temp->val = val_new;
      }
    }
    temp = temp->next;
  }
  return changed;
}
