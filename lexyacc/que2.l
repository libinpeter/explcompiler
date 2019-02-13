%{
#include"y.tab.h"
%}
%option noyywrap
op "+"|"-"|"*"|"/" 
%%
[a-z]+ {yylval.str=strdup(yytext);return chara;}
{op} { return *yytext;}
\n {return NL;}
[.]  {return *yytext;}
%%
