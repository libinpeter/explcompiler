%{
	#include <stdio.h>
	#include "y.tab.h"
	#include <stdlib.h>
	#include "exptree.h"
	int number;

%}
%option noyywrap
%%

[0-9]+	{number = atoi(yytext);
        yylval.no = makeLeafNode(number);
        return NUM;}
"+" 	{return PLUS;}
"-"	    {return MINUS;}
"*"	    {return MUL;}
"/"	    {return DIV;}
[ \t]	{}
[()\n]	{return *yytext;}
.	    {printf("unknown character\n");
        exit(1);}
%%