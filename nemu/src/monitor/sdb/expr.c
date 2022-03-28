#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM,TK_L_PRTS, TK_R_PRTS,
  TK_NEG,
  TK_MUL, TK_DIV, 
  TK_ADD, TK_SUB
  
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
//the priority of TK_NEG and TK_DEREF is 3
  {" +", TK_NOTYPE, 7},      // spaces
  {"[0-9]+",TK_NUM, 7},      //decimal number
  {"\\(",TK_L_PRTS, 8},      // (
  {"\\)",TK_R_PRTS, 8},      // )
  {"\\+", TK_ADD,   1},      // plus
  {"-", TK_SUB,     1},      //sub
  {"\\*",TK_MUL,    2},      //mul
  {"\\/",TK_DIV,    2},      //div
  {"==", TK_EQ,     6},      // equal
};

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
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
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

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: break;

          default: //TODO();
                   tokens[nr_token].type = rules[i].token_type;
                   tokens[nr_token].priority = rules[i].priority;
                   strncpy(tokens[nr_token].str, substr_start, substr_len);
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

bool check_parentheses(int p, int q, bool *success);

int get_main_op(int p, int q,bool *success);

uint64_t eval(int p, int q, bool *success);

uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
  *success = true;

  /*Judge the negedge sign and the deref.
    -1  ! 1-(1+1) 
  */
  for(int i=0; i < nr_token; i++){
    if((tokens[i].type == TK_SUB) && 
        ( (i==0) ||
          ( (tokens[i-1].priority != 7) && (tokens[i-1].type != TK_R_PRTS) )
        )
      ){
      tokens[i].type = TK_NEG;
      tokens[i].priority = 3; 
    }
  }
  
  //" !!! \0"
  return eval(0,nr_token-1,success);
}

bool check_parentheses(int p, int q, bool *success){
  int i; 
  int cnt_prts = 0;
  //*success = true;
  if( tokens[p].type != TK_L_PRTS || tokens[q].type != TK_R_PRTS ){ 
    return false;
  }
  printf("check prts \n");
  for(i=p+1; i<q; i++){
    if(tokens[i].type == TK_L_PRTS)     cnt_prts++;
    else if(tokens[i].type == TK_R_PRTS) cnt_prts--;
    if(cnt_prts < 0){
      //*success = false;
      return false;
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
        printf("in get main op_pos:%d\n",op_pos);
        printf("tho op_pos prior: %d\n",tokens[i].priority);
        max_priority = tokens[i].priority;
      //;break;
      }
    }
    else if (tokens[i].type == TK_R_PRTS) inprts++;
    else if (tokens[i].type == TK_L_PRTS) inprts--;
  }
  if(inprts != 0) *success = false;
  return op_pos;
}

uint64_t eval(int p, int q, bool *success){
  if(p > q){
    printf("Bad expression\n");
    printf("p:%d,q:%d \n",p,q);
    *success = false;
    return 0;
  }
  else if(p == q){
    uint64_t val_temp = 0;
    sscanf(tokens[p].str,"%ld",&val_temp);
    return val_temp;
  }
  else if(check_parentheses(p,q,success) == true){
    return eval(p+1,q-1,success);
  }
  else {
    uint64_t val1=0,val2=0,val=0;
    int op_pos = get_main_op(p,q,success);
    printf("op_pos:%d\n",op_pos);
    printf("p:%d\n",p);
    printf("q:%d\n",q);
    
    if(tokens[op_pos].type == TK_NEG){
      val2 = eval(op_pos+1,q,success);
    }
    else {
      val2 = eval(op_pos+1,q,success);
      val1 = eval(p, op_pos-1,success);
    }
    
    printf("vla1:%ld vla2:%ld\n",val1,val2);
    switch(tokens[op_pos].type){
      case TK_ADD:val = val1 + val2;break;
      case TK_SUB:val = val1 - val2;break;
      case TK_MUL:val = val1 * val2;break;
      case TK_DIV:
                  if(val2==0){
                    *success = false;
                    Log("Warning: the divisor is 0 at position %d\n",q);
                    return 0;
                  }
                  val = val1 / val2;break;
      case TK_NEG:val = -val2; break;
      default:printf("Unknow token type\n");*success = false; return 0;
    }
    //*success = true;
    return val;
  }
}
