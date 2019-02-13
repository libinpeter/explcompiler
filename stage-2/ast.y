%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "abstree.h"
	#include "abstree.c"
	
 
%}

%union{
	struct tnode *no;
}
%type <no> exp NUM ID slist stmt start
%token NUM PLUS MINUS MUL DIV BEG READ WRITE END ASGN ID
%right ASGN
%left PLUS MINUS
%left MUL DIV

%%

start: BEG slist END';' { $$ = $2; codegen($2,out);evaluate($2);}
     | BEG END           {exit(0);} 
;
slist: slist stmt       {$$=Createtree(0,0,NULL,CONN,$1,$2);}   
     | stmt             {$$=$1;}
 ;
exp:   exp PLUS exp		{$$ = Createtree(0,0,'+',EXPR,$1,$3);}
	 | exp MINUS exp    {$$ = Createtree(0,0,'-',EXPR,$1,$3);}
	 | exp MUL exp	    {$$ = Createtree(0,0,'*',EXPR,$1,$3);}
	 | exp DIV exp	    {$$ = Createtree(0,0,'/',EXPR,$1,$3);}
	 | '('exp')'		{$$ = $2;}
	 | ID               {$$ = $1;}
	 | NUM			    {$$ = $1;}

;
	
stmt: ID ASGN exp';'     {$$ = Createtree(0,0,'=',ASSN,$1,$3);}
    | READ '('ID')'';'   {$$ = Createtree(0,0,NULL,RD,$3,NULL);}
	| WRITE '('exp')'';' {$$ = Createtree(0,0,NULL,WT,$3,NULL);}
;

%%

void yyerror(char const *s)
{
    printf("invalid %s",s);
	exit(0);
}

int main(int argc,char* argv[]) {
if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
}

    out = fopen("out.xsm","w");
	fprintf(out,"0\n2056\n0\n0\n0\n0\n0\n0\n"); 
	fprintf(out,"MOV SP,4121\n");
	yyparse();
    fprintf(out,"INT 10\n");
	return 0;
}
