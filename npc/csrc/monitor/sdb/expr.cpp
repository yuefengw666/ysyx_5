#include "npc_common.h"
#include "mem.h"
#include <regex.h>

word_t npc_reg_str2val(const char *s, bool *success);

enum {
  TK_NOTYPE = 256, 
  TK_L_PRTS, TK_R_PRTS,
  TK_DEC,TK_HEX,TK_REG,
  TK_ADD, TK_SUB,TK_MUL, TK_DIV, 
  TK_NEG,TK_INV, TK_DEREF,
  TK_EQ, TK_UNEQ,
  TK_AND, TK_OR,
  
  /* TODO: Add more token types */
};

static struct rule {
  const char *regex;
  int token_type;
  int priority;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
//the bigger value of priority, the greater priority.
//the priority of TK_NEG and TK_DEREF is 6
  {" +",                  TK_NOTYPE,      8},       // spaces
  {"0[Xx][0-9a-fA-F]+",   TK_HEX,         7},       //hexadecimal number
  {"[0-9]+",              TK_DEC,         7},       //decimal number
  {"\\$[0-9a-z]+",        TK_REG,         7},       //register
  {"\\(",                 TK_L_PRTS,      8},       // (
  {"\\)",                 TK_R_PRTS,      8},       // )
  
  {"!=",                  TK_UNEQ,        3},       //unequal

  {"!",                   TK_INV,         6},       //invert
  {"\\*",                 TK_MUL,         5},       //mul  or  derefrence
  {"\\/",                 TK_DIV,         5},       //div
  {"\\+",                 TK_ADD,         4},       // plus
  {"-",                   TK_SUB,         4},       //sub
  {"==",                  TK_EQ,          3},       // equal
  //{"!=",                  TK_UNEQ,        3},       //unequal
  {"&&",                 TK_AND,         2},       //and
  {"\\|\\|",             TK_OR,          1},       //or

};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);//REG_NEWLINE  REG_EXTENDED
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      printf("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
      assert(0);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
  int priority;
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        /*Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);
        */
        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case TK_DEC:
          case TK_HEX:
          case TK_REG:
                      strncpy(tokens[nr_token].str, substr_start, substr_len);
                      tokens[nr_token].str[substr_len] = '\0';
          default: //TODO();
                   tokens[nr_token].type = rules[i].token_type;
                   tokens[nr_token].priority = rules[i].priority;
                   //strncpy(tokens[nr_token].str, substr_start, substr_len);
                   nr_token++;
                   break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p, int q);

int get_main_op(int p, int q,bool *success);

word_t eval(int p, int q, bool *success);

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
  *success = true;

  //Judge the negedge sign and the deref.
  for(int i=0; i < nr_token; i++){
    if((tokens[i].type == TK_SUB) && ( (i==0) ||( (tokens[i-1].priority != 7) && (tokens[i-1].type != TK_R_PRTS) ))){
      tokens[i].type = TK_NEG;
      tokens[i].priority = 6; 
    }
    else if((tokens[i].type == TK_MUL) && ((i==0)||( (tokens[i-1].priority!=7)&&(tokens[i-1].type != TK_R_PRTS)))){
      tokens[i].type = TK_DEREF;
      tokens[i].priority = 6;
    }
  }
  
  //" !!! \0"
  return eval(0,nr_token-1,success);
}

bool check_parentheses(int p, int q){
  int i; 
  int cnt_prts = 0;
  if( tokens[p].type != TK_L_PRTS || tokens[q].type != TK_R_PRTS ){ 
    return false;
  }
  for(i=p+1; i<q; i++){
    if(tokens[i].type == TK_L_PRTS)     cnt_prts++;
    else if(tokens[i].type == TK_R_PRTS) cnt_prts--;
    if(cnt_prts < 0){
      return false; //( )+( )
      break;
    }
  }

  if(cnt_prts == 0) return true;
  else return false;
}

int get_main_op(int p, int q,bool *success){
  //*success = true;
  int op_pos = p;
  int i;
  int inprts = 0;
  int max_priority = 7;
  for(i=p; i<=q; i++){
    if( (inprts == 0) && (tokens[i].priority < 7) ){
      if(tokens[i].type == TK_NEG){
        if(tokens[i].priority < max_priority){
          op_pos = i;
          max_priority = tokens[i].priority;
        }
      }
      else if(tokens[i].priority <= max_priority){
        op_pos = i;
        max_priority = tokens[i].priority;
      }
    }
    else if (tokens[i].type == TK_R_PRTS) inprts++;
    else if (tokens[i].type == TK_L_PRTS) inprts--;
  }
  if(inprts != 0) *success = false;
  return op_pos;
}

word_t eval(int p, int q, bool *success){
  if(p > q){
    printf("Bad expression\n");
    //printf("p:%d,q:%d \n",p,q);
    *success = false;
    return 0;
  }
  else if(p == q){
    word_t val_temp = 0;
    switch(tokens[p].type){
    case TK_DEC: sscanf(tokens[p].str,"%ld",&val_temp); break;
    case TK_HEX: sscanf(tokens[p].str,"%lx",&val_temp); break;
    case TK_REG: 
                //if(strcmp(tokens[p].str,"$pc")==0){
                //  val_temp = cpu.pc;
                //}
                //else {
                  val_temp = npc_reg_str2val(tokens[p].str,success);
                //}
                break;
    default:printf("value:%s error\n",tokens[p].str);
    }
    return val_temp;
  }
  else if(check_parentheses(p,q) == true){
    return eval(p+1,q-1,success);
  }
  else {
    word_t val1=0,val2=0,val=0;
    int op_pos = get_main_op(p,q,success);
    if(tokens[op_pos].type == TK_NEG || tokens[op_pos].type == TK_DEREF || tokens[op_pos].type == TK_INV){
      val2 = eval(op_pos+1,q,success);
    }
    else {
      val1 = eval(p, op_pos-1,success);
      val2 = eval(op_pos+1,q,success);
    }
    
    switch(tokens[op_pos].type){
      case TK_ADD:val = val1 + val2;break;
      case TK_SUB:val = val1 - val2;break;
      case TK_MUL:val = val1 * val2;break;
      case TK_DIV:
                  if(val2==0){
                    *success = false;
                    printf("Warning: the divisor is 0 at position %d\n",q);
                    return 0;
                  }
                  val = val1 / val2;  break;
      case TK_NEG:val = -val2;break;
      case TK_EQ: val = val1 == val2; break;
      case TK_UNEQ: val = val1 != val2; break;
      case TK_AND: val = val1 && val2; break;
      case TK_OR: val = val1 || val2;break;
      case TK_INV: val = !val2; break;
      case TK_DEREF: val = pmem_read(val2);
      default:printf("Unknow token type\n");*success = false; return 0;
    }
    return val;
  }
}
