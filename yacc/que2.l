%{
   #include "y.tab.h"
%}
%option noyywrap

%%

[a-zA-Z]*              return letter;
[0-9]                  return digit;
.                      return yytext[0];
\n                     return 0;

%%


