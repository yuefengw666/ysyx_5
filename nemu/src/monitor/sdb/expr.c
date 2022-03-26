#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_MUL, TK_DIV, TK_ADD, TK_SUB, TK_L_PRTS,
  TK_R_PRTS

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", TK_ADD},         // plus
  {"==", TK_EQ},        // equal
  {"-", TK_SUB},           //sub
  {"\\*",TK_MUL},          //mul
  {"\\/",TK_DIV},          //div
  {"\\(",TK_L_PRTS},          // (
  {"\\)",TK_R_PRTS},          // )
  {"[0-9]+",TK_NUM},    //decimal number
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

          default: 
                   tokens[nr_token].type = rules[i].token_type;//TODO();
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

word_t eval(int p, int q, bool *success);

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  printf("1\n");
  /* TODO: Insert codes to evaluate the expression. */
  *success = true;
  
  return eval(0,nr_token-1,success);
}

bool check_parentheses(int p, int q, bool *success){
  int i; 
  int cnt_prts = 0;
  *success = true;
  if( tokens[p].type != TK_L_PRTS || tokens[q].type != TK_R_PRTS ){ 
    return false;
  }
  
  for(i=p+1; i<q; i++){
    if(tokens[i].type == TK_L_PRTS)     cnt_prts++;
    else if(tokens[i].type == TK_R_PRTS) cnt_prts--;
    if(cnt_prts > 0){
      *success = false;
      return false;
      break;
    }
  }

  if(cnt_prts == 0) return true;
  return false;
}

int get_main_op(int p, int q,bool *success){
  *success = true;
  int op_pos = q;
  int i;
  int inprts = 0;
  printf("2\n");
  for(i=q; i>=p; i--){
    if(!inprts && (tokens[i].type > 260 && tokens[i].type < 263) ){
      op_pos = i;
      break;
    }
    else if (!inprts && (tokens[i].type > 258 && tokens[i].type < 261) ){
      op_pos = i;
      continue;
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
    *success = false;
    return 0;
  }
  else if(p == q){
    word_t val_temp = 0;
    sscanf(tokens[p].str,"%lu",&val_temp);
    return val_temp;
  }
  else if(check_parentheses(p,q,success) == true){
    return eval(p+1,q-1,success);
  }
  else {
    word_t val1=0,val2=0,val=0;
    int op_pos = get_main_op(p,q,success);
    printf("op_pos:%d\n",op_pos);
    printf("3\n");
    printf("p:%d\n",p);
    printf("q:%d\n",q);
    val1 = eval(p, op_pos-1,success);
    val2 = eval(op_pos+1,q,success);
    printf("vla1:%lu vla2:%lu\n",val1,val2);
    switch(tokens[op_pos].type){
      case TK_ADD:val = val1 + val2;break;
      case TK_SUB:val = val1 - val2;break;
      case TK_MUL:val = val1 * val2;break;
      case TK_DIV:val = val1 / val2;break;
      default:printf("Unknow token type\n");*success = false; return 0;
    }
    //*success = true;
    return val;
  }
}
