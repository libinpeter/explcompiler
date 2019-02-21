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
[a-z]	    {yylval.no = Createtree(0,INT,*yytext,VAR,NULL,NULL,NULL);return ID;}
[0-9]+  	{number = atoi(yytext);yylval.no = Createtree(number,INT,NULL,CONST,NULL,NULL,NULL);return NUM;}
"read"   	{return READ;}
"write"   	{return WRITE;}
"begin"     {return BEG;}
"end"       {return END;}
[=]         {return ASGN;}
[ \t\n] 	{}
"-"         {return MINUS;}
"+"         {return PLUS;}
"*"         {return MUL;}
"/"  	    {return DIV;}
"<" 		{return LT;}
">"         {return GT;}
"<=" 		{return LTE;}
">="        {return GTE;}
"=="        {return EQ;}
"!="        {return NEQ;}
"if" 		{return IF;}
"then" 		{return THEN;}
"while" 	{return WHILE;}
"endwhile" 	{return ENDWHILE;}
"endif" 	{return ENDIF;}
"do" 		{return DO;}
"else"      {return ELSE;}
"break"     {return BREAK;}
"continue"  {return CONTINUE;}
"repeat"    {return REPEAT;}
"until"     {return UNTIL;}
[();]    	{return *yytext;}
.           {yyerror("unknown character\n");exit(1);}
%%
