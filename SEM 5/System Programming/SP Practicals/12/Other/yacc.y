%{
#include<stdio.h>
#include<stdlib.h>
#include "q12.tab.h"
%}
%token A B
%%
S : E '\n' { printf("VALID STRING\n"); exit(0); }
;
E : A E B
| A B
;
%%
int main(){
printf("\nEnter the string :: ");
yyparse();
return 0;
}
yywrap(){}
yyerror(){
printf("\nInvalid String");
}

