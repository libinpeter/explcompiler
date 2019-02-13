%{
#define YYSTYPE char
#include<stdio.h>
#include<stdlib.h>

%}

%token chara NL
%left '+' '-'
%left '*' '/'

%%
start : exp NL	{printf("\nComplete");exit(0);}
	;

exp:   exp '+' exp		{printf("+ ");}
	| exp '*' exp		{printf("* ");}
        | exp '-' exp           {printf("- ");}
        | exp '/' exp           {printf("/ ");}
	| '(' exp ')'
	| chara			{printf("%c ",$1);}
	;

%%
int main()
{
   printf("\nEnter the expression:\n\n");
   yyparse();
   printf("\n");
   return 0;
}
int yyerror(char *mes) {
 printf("invalid exp");
   return 0;
}

