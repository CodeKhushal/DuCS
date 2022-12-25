%{
#include<stdio.h>
#include<string.h>
int lines = 0, nchar = 0, nspc = 0, nwrd = 0;
%}

%%
[\n]|[.] {lines++; }
[A-Za-z|0-9]+ {nwrd++;nchar = nchar+strlen(yytext);}
([ ])|[\t|\r]+ {nspc++;}
. {nchar++;}
%%

int main()
{
  yyin=fopen("sample.cpp", "r");
  yylex();
  printf("Number of lines : %d\n", lines);
  printf("Number of spaces : %d\n", nwrd);
  printf("Number of words : %d\n", nspc);
  printf("Number of characters : %d\n", nchar);
  return 0;
}

