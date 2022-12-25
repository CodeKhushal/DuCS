%{
#include<stdio.h>
#include<stdlib.h>
#include "q11.tab.h"
int yylval;
%}
%%
[0-9]+ {yylval = atoi(yytext);
return NUM;}
[\t]+ ;
\n {return 0;}
. {return yytext[0];}
%%
