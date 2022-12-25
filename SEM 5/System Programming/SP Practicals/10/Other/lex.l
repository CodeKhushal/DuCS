%{
#include <stdio.h>
#include <stdlib.h>
#include "q10.tab.h"
%}
%option noyywrap
%%
[a-z] { return L; }
[0-9] { return D; }
[ \t\n]+ { ; }
. { return yytext[0]; }
%%
