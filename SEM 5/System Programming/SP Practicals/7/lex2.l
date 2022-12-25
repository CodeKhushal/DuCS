%{
#include<stdio.h>
char ch;
char i,j;
%}

%%
[a-zA-Z]* {printf("\n");
for(i=0; i<yyleng; i++)
{
  for(j = 0; j<yyleng-i; j++)
  {
    printf("%c",yytext[j]);
  }
  printf("\n");
}
}
%%

int main()
{
  yylex();
  return 0;
}

