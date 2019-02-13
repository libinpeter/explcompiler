extern FILE* yyin;
FILE *out;
void yyerror(char const *s);
int yylex(void);
#define VAR   1
#define CONST 2
#define EXPR  3
#define ASSN  4
#define RD    5
#define WT    6
#define CONN  7
typedef struct tnode { 
	int val;	// value of a number for NUM nodes.
	int type;	//type of variable
	char* varname;	//name of a variable for ID nodes  
	int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
	struct tnode *left,*right;	//left and right branches   
}tnode;
int getreg();
static int reg=0;
void freereg();
int var[26];
struct tnode* Createtree(int val,int type,char* varname,int nodetype,struct tnode *l,struct tnode *r);
void check(struct tnode* t);
void inorder(struct tnode *t);