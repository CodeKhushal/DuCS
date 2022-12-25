%{
#include <stdio.h>
#include <stdlib.h>
#include "q10.tab.h"
%}
%token D L
%%
S : L D { printf("VALID IDENTIFIER\n"); }
;
%%

int main()
{
  printf("\n Enter identifier\n");
  yyparse();
  return 0;
}

int yywrap(){}
int yyerror(){
  printf("\nInvalid Identifier\n");
  exit(1);
}

