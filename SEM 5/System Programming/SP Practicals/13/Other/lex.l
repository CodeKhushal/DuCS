%{
#include<stdio.h>
#include<stdlib.h>
#include "q13.tab.h"
%}
%%
[a] {return A;}
[b] {return B;}
\n {return NL;}
. {return yytext[0];}
%%
