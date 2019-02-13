%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "exptree.h"
	#include "exp.c"
    void yyerror(char const *s);
	int yylex(void);
    extern FILE* yyin;
	FILE* fout;
    struct tnode* root;
%}

%union{
	struct tnode *no;
}
%type <no> exp NUM 
%token NUM PLUS MINUS MUL DIV 
%left PLUS MINUS
%left MUL DIV

%%

start : exp '\n'	{root=$1;}
		;

exp : PLUS exp exp		{$$ = makeOperatorNode('+',$2,$3);}
	 | MINUS exp exp  	{$$ = makeOperatorNode('-',$2,$3);}
	 | MUL exp exp	    {$$ = makeOperatorNode('*',$2,$3);}
	 | DIV exp exp	    {$$ = makeOperatorNode('/',$2,$3);}
	 | '(' exp ')'		{$$ = $2;}
	 | NUM			    {$$ = $1;}
	 ;

%%

void yyerror(char const *s)
{
    printf("invalid %s",s);
	exit(0);
}


int main(void) {
    yyin =  fopen("input.txt","r");
    fout = fopen("out.xsm","w");
	yyparse();
	fprintf(fout,"0\n2056\n0\n0\n0\n0\n0\n0\n"); 
    codegen(root,fout);
    stack(fout);
    print(fout);
    fprintf(fout,"INT 10\n");
	return 0;
}
