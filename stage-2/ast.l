%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "y.tab.h"
    #include "abstree.h"
	int number;
%}

%option noyywrap

%%
[a-z]	{yylval.no = Createtree(0,0,*yytext,VAR,NULL,NULL);return ID;}
[0-9]+	{ number = atoi(yytext);yylval.no = Createtree(number,0,NULL,CONST,NULL,NULL);return NUM;}
"read"	{return READ;}
"write"	{return WRITE;}
"begin" {return BEG;}
"end"    {return END;}
[=]     {return ASGN;}
[ \t\n] 	{}
"-"      {return MINUS;}
"+"      {return PLUS;}
"*"     {return MUL;}
"/"  	{return DIV;}

[();] 	{return *yytext;}
.       {yyerror("unknown character\n");exit(1);}

%%
