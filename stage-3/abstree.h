extern FILE* yyin;
FILE *out;
void yyerror(char const *s);
int yylex(void);
#define VOID  0
#define INT   1
#define BOOL  2 
#define VAR   3
#define CONST 4
#define EXPR  5
#define ASSN  6
#define RD    7
#define WT    8
#define CONN  9
#define NIF   10
#define NIFEL 11
#define WHL   12
#define EQL   13
#define NEQL  14
#define LE    15
#define GE    16
#define DWHL  17
#define RPL   18
#define BRK   19
#define CNT   20
typedef struct tnode { 
	int val;	// value of a number for NUM nodes.
	int type;	//type of variable
	char* varname;	//name of a variable for ID nodes  
	int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
	struct tnode *left,*right,*ptr;	  
}tnode;
int getreg();
static int reg=0;
static int label=0;
void freereg();
void start();
void stack0();
void exit0();
int var[26];
struct tnode* Createtree(int val,int type,char* varname,int nodetype,struct tnode *l,struct tnode *r,struct tnode *p);
void check(struct tnode* t);
void inorder(struct tnode *t);
void checker(struct tnode* node);

struct stack
{
    int label;
    struct stack *next;
};

struct stack* push(struct stack* top,int label);
struct stack* pop(struct stack* top, int* label);
