%{
#include"y.tab.h"
YYSTYPE yylval;
%}
%option noyywrap
op "+"|"-"|"*"|"/"
%%
[a-z]+ {yylval=*yytext;return chara;}
{op} { return *yytext;}
\n {return NL;}
[.]  {return *yytext;}
%%
