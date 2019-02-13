%{
    #include<stdio.h>
  

%}

%token digit letter

%%
start : letter exp
;
exp   : letter exp
      | digit exp
      |
;

%%
void yyerror()
{
    printf("\nIts not a valid variable\n");
    exit(0);

}

int main()
{
printf("\nEnter the variable for testing\n ");
yyparse();
printf("\nIt is a valid variable\n");
return 1;
}
