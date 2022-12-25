%option noyywrap
%{
#include<stdio.h>
int count = 0;
%}

%%
[A-Z a-z _][A-Z a-z 0-9 _]* count++;
%%

int main(){
  yyin = fopen("hello.txt", "r");
  yylex();
  printf("\nNo. of Identifiers: %d", count);
  return 0;
}
