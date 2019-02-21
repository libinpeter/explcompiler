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
%token NUM PLUS MINUS MUL DIV BEG READ WRITE END ASGN ID LT GT LTE GTE EQ NEQ IF THEN WHILE ENDWHILE ENDIF DO ELSE REPEAT UNTIL BREAK CONTINUE
%right ASGN
%left PLUS MINUS
%left MUL DIV
%nonassoc LT GT LTE GTE EQ NEQ

%%

start: BEG slist END';'  { $$ = $2; codegen($2,out);evaluate($2);}
     | BEG END           {exit(0);} 
;
slist: slist stmt       {$$=Createtree(0,VOID,NULL,CONN,$1,$2,NULL);}   
     | stmt             {$$=$1;}
 ;
exp:   exp PLUS exp		{$$ = Createtree(0,INT,'+',EXPR,$1,$3,NULL);}
	 | exp MINUS exp    {$$ = Createtree(0,INT,'-',EXPR,$1,$3,NULL);}
	 | exp MUL exp	    {$$ = Createtree(0,INT,'*',EXPR,$1,$3,NULL);}
	 | exp DIV exp	    {$$ = Createtree(0,INT,'/',EXPR,$1,$3,NULL);}
	 | exp LT exp	    {$$ = Createtree(0,BOOL,'<',EXPR,$1,$3,NULL);}
     | exp GT exp	    {$$ = Createtree(0,BOOL,'>',EXPR,$1,$3,NULL);}
     | exp LTE exp	    {$$ = Createtree(0,BOOL,LE,EXPR,$1,$3,NULL);}
	 | exp GTE exp	    {$$ = Createtree(0,BOOL,GE,EXPR,$1,$3,NULL);}
	 | exp EQ exp	    {$$ = Createtree(0,BOOL,EQL,EXPR,$1,$3,NULL);}
	 | exp NEQ exp	    {$$ = Createtree(0,BOOL,NEQL,EXPR,$1,$3,NULL);}
	 | '('exp')'		{$$ = $2;}
	 | ID               {$$ = $1;}
	 | NUM			    {$$ = $1;}

;
	
stmt: ID ASGN exp';'                              {$$ = Createtree(0,VOID,'=',ASSN,$1,$3,NULL);}
    | READ '('ID')'';'                            {$$ = Createtree(0,VOID,NULL,RD,$3,NULL,NULL);}
	| WRITE '('exp')'';'                          {$$ = Createtree(0,VOID,NULL,WT,$3,NULL,NULL);}
	| IF '('exp')' THEN slist ELSE slist ENDIF';' {$$ = Createtree(0,VOID,NULL,NIFEL,$3,$6,$8);}
	| IF '('exp')' THEN slist ENDIF';'            {$$ = Createtree(0,VOID,NULL,NIF,$3,$6,NULL);}
	| WHILE '('exp')' DO slist ENDWHILE';'        {$$ = Createtree(0,VOID,NULL,WHL,$3,$6,NULL);}
	| DO slist WHILE '('exp')'';'                 {$$ = Createtree(0,VOID,NULL,DWHL,$5,$2,NULL);}
	| REPEAT slist UNTIL '('exp')'';'             {$$ = Createtree(0,VOID,NULL,RPL,$5,$2,NULL);}
	| BREAK';'                                    {$$ = Createtree(0,VOID,NULL,BRK,NULL,NULL,NULL);}
    | CONTINUE';'                                 {$$ = Createtree(0,VOID,NULL,CNT,NULL,NULL,NULL);}
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

    out = fopen(argv[2],"w");
    start();
	stack0();
	yyparse();
	exit0();
    return 0;
}
