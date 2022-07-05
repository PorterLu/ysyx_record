#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

word_t vaddr_read(vaddr_t addr, int len);

extern const char *regs[];

enum {
	  NOTYPE = 256, EQ, NEQ,HEX,NUM,REG,SYMB,LS,RS,NG,NL,AND,OR,DEREF
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  	{" +",	NOTYPE},				// white space
	{"\\+", '+'},					// add
	{"\\-", '-'},					// sub
	{"==", EQ},					//equal
	{"!=",NEQ},					//unequal
	{"0[xX][0-9a-fA-F]+", HEX},			//hexidecimal	
	{"[0-9]+", NUM},				//number
	{"t[0-6]", REG},
	{"s[0-1]", REG},
	{"a[0-7]", REG},
	{"s([2-9]|10|11)", REG},
	{"pc",REG},
	{"(\\$0|ra|sp|gp|tp)", REG},			//register
	{"[a-zA-Z]+[a-zA-Z0-9_]*", SYMB},		//symbol
	{"\\*", '*'},					//mul or ref
	{"/", '/'},					//div
	{"%", '%'},					//mod
	{"\\(", '('},					//l_bracket
	{"\\)", ')'},					//r_bracket
	{"<<", LS},					//left shift
	{">>", RS},					//right shift
	{"<=", NG},					//not greater than
	{">=", NL},					//not less than
	{"<", '<'},					//less than
	{">", '>'},					//greater than
	{"&&",AND},					//AND
	{"\\|\\|",OR},					//OR
	{"&",'&'},					//and
	{"\\^",'^'},					//xor
	{"\\|",'|'},					//or
	{"!",'!'},					//non
	{"~",'~'}					//reverse
};

static struct priority
{
	int token_type;
	int prior;
} prior_arr[] = {
	{'+',4},
	{'-',4},
	{EQ,7},
	{NEQ,7},
	{'*',3},
	{'/',3},
	{'%',3},
	{LS,5},
	{RS,5},
	{NG,6},
	{NL,6},
	{'<',6},
	{'>',6},
	{AND,11},
	{OR,12},
	{'&',8},
	{'^',9},
	{'|',10},
	{'!',2},
	{'~',2},
	{DEREF,2}
};	

#define MAX_PRIOR 15
#define NR_REG ARRLEN(cpu.gpr)
#define NR_PRIOR ARRLEN(prior_arr)
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
  char str[64];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
	int position = 0;
	int i;
	regmatch_t pmatch;
	
	nr_token = 0;

	while(e[position] != '\0') {
		/* Try all rules one by one. */
		for(i = 0; i < NR_REGEX; i ++) {
			if(regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
				char *substr_start = e + position;
				int substr_len = pmatch.rm_eo;

				position += substr_len;

				switch(rules[i].token_type) {
					case NOTYPE:
						break;
					case HEX:
					case NUM:
					case REG:
					case SYMB:
						strncpy(tokens[nr_token].str,substr_start,substr_len);
						tokens[nr_token].str[substr_len]='\0';
					default: 
						tokens[nr_token].type = rules[i].token_type;
						nr_token++;
				}

				break;
			}
		}

		if(i == NR_REGEX) {
			printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
			return false;
		}
	}

	return true; 
}

int find_prior(uint32_t token_type)
{
	int i;
	for(i=0;i<NR_PRIOR ;i++)
	{
		if(prior_arr[i].token_type == token_type)
			return prior_arr[i].prior;
	}
	return -1;
}

bool check_parentheses(uint32_t p,uint32_t q)
{
	int i;
	int match = 0;
	if(tokens[p].type == '(' && tokens[q].type == ')')
	{
		for(i=q-1;i>=p+1;i--)
		{
			if(tokens[i].type == ')')
				match ++;
			else if(tokens[i].type == '(' && match > 0)
				match--;
		}
	}

	if(match == 0 && tokens[p].type == '(' && tokens[q].type == ')')
		return true;
	else 
		return false;
}

uint64_t eval(int p,int q,bool* success, int depth) {
	//printf("start p %d, q %d\n",p,q);
	//printf("p:%d q:%d\n",p,q);
    if(*success == false || depth > 35) {
		  *success = false; 
		  return -1;
    }

	if(p > q)
	{
		return 0;
	}
    else if(p == q) { 

		uint64_t result;
		//printf("%s\n",tokens[p].str);

		switch(tokens[p].type)
		{
			case NUM:
				//printf("%d %s\n",p,tokens[p].str);
				sscanf(tokens[p].str,"%lu",&result);
				//printf("number\n");
				return result;
			case REG:
				return isa_reg_str2val(tokens[p].str,success);
			case HEX:
				sscanf(tokens[p].str,"0x%lx",&result);
				return result;
			/*
			case SYMB:
				result = findSym(tokens[p].str);
				return result;
			default:
				return look_up_symtab(tokens[p].str,success);
			*/
		}
    
    }
    else if(check_parentheses(p, q) == true) {
        /* The expression is surrounded by a matched pair of parentheses. 
        * If that is the case, just throw away the parentheses.
        */
        return eval(p + 1, q - 1, success,depth+1); 
    }
    else 
    {
  
      int prior = MAX_PRIOR,op = -1,find = 0;
      while(prior!=0 && !find)
      {
        int i;
        for(i = q; i>=p; i--)
        {
          int temp = find_prior(tokens[i].type);
		  int colon_match = 0;
          if(tokens[i].type == ')')
          {
            int j;
			colon_match++;
            for(j = i-1; j>=p; j--)
            {
			  if(tokens[j].type == ')')
			  {
			  	colon_match++;
			  }
			  else
			  {
              	if(tokens[j].type == '(')
              	{
					colon_match--;
					if(colon_match == 0)
					{
                		i = j;
                		break;
					}
              	}
			  }
            }
          }
          else if(prior == temp)
          {
            find = 1;
            op = i;
            break;
          }
        }
        prior--;
    }
    
	// op = the position of dominant operator in the token expression;
    uint64_t val1 = eval(p, op - 1,success,depth+1);
	//printf("p:%d  op-1:%d",p,op-1);
    uint64_t val2 = eval(op + 1, q,success,depth+1);
	//printf("p %d,q %d\n",p,q);
	/*f(p==0 && q==4)
	{
		printf("%s\n",tokens[0].str);
		printf("%s\n",tokens[1].str);
		printf("%s\n",tokens[2].str);
		printf("%s\n",tokens[3].str);
		printf("%s\n",tokens[4].str);
	}*/

	if(val2 == 0 && (tokens[op].type == '/'|| tokens[op].type == '%'))
	{
		*success = false;
		return -1;
	}

	/*
	if(p==0 && q==4)
	{
		printf("%d",tokens[op].type);
		printf("watch1\n");
	}*/
	//printf("val1:%ld\n",val1);
	//printf("val2:%ld\n",val2);
    //printf("get sub value\n");
    switch(tokens[op].type) 
    {
      case '+': return val1 + val2; break;
      case '-': return val1 - val2; break;
      case '*': return val1 * val2; break;
      case '/': return val1 / val2; break;
      case '%': return val1 % val2; break;
      case '&': return val1 & val2; break;
      case '^': return val1 ^ val2; break;
      case '|': return val1 | val2; break;
      case '~': return ~val2; break;
      case '!': return !val2; break;
      case '<': return val1 < val2; break;
      case '>': return val1 > val2; break;
      case LS: return val1 << val2; break;
      case RS: return val1 >> val2; break;
      case NG: return val1 <= val2; break;
      case NL: return val1 >= val2; break;
      case EQ: return val1 == val2; break;
      case NEQ: return val1 != val2; break;
      case AND: return val1 && val2; break;
      case OR: return val1 || val2; break;
      case DEREF: return vaddr_read(val2, 8); break;
      default: assert(0);
    }
	/*
	if(p==0 && q==4)
	{
		printf("watch2\n");
	}*/
  }

  return 0;
}

int operator_judge(uint32_t type)
{

	if(type == '+'|| type == '-' || type == EQ || type == NEQ || type == '*' ||type =='/' ||type == '%' \
		||type == LS ||type == RS ||type == NG ||type == NL ||type == '<' ||type == '>' ||type == AND || \
		type == OR ||type =='&' ||type == '^' || type =='|' ||type =='!'||type =='~')
		return true;
	else
		return false; 
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  	int i;	
	for(i = 0; i < nr_token; i++) 
	{
   		 if(tokens[i].type == '*' && (i == 0 || operator_judge(tokens[i - 1].type)  ) )
        	tokens[i].type = DEREF; 
	}
	
	uint64_t result = eval(0,nr_token-1,success, 0);
	//printf("i am here\n");
	return result;


  return 0;
}
