%option noyywrap
%{
#include<stdio.h>
int counter=0;
%}
%%
[a-zA-Z]+ {if(yyleng>counter)
counter=yyleng;
}
%%
int main()
{
  yylex();
  printf("largest: %d", counter);
  return 0;
}
