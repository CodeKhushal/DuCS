%{
#include<stdio.h>
#include<stdlib.h>
int yylex(void);
int yyerror(char *);
/*
    E production is to check if entered identifier is valid or not ie letters then digits (as per question )
    E->letterT
    T->letterT|digit
    Now for valid expression S production taking care of it
    S->E (a single variable is also a valid expression means urinary)
        | S operator S and so on .................
    and newline when user press enter then show result
    Here, number i.e. valid Expression 0/1/2 etc are just for debugging purpose ie to check which production is used
*/
%}
//tokens letter digit new line operator open bracket close bracket
%token letter digit newline operator minus ob cb
// for left associativity 
%left '+' '-'                                          
%left '*' '/'
%%
 

S : E { printf("Valid Identifiers 1\n");printf("Final result : valid Expression \n");exit(0);};
    | S operator S newline {printf("Final result :  valid Expression \n");exit(0);}
    | S minus S newline {printf("Final result : valid Expression \n"); exit(0);}
    | minus S newline {printf("Final result : valid Expression \n"); exit(0);}
    | S operator ob minus S cb {printf("Final result : valid Expression \n"); exit(0);}
    | S operator ob S cb {printf("Final result : valid Expression \n"); exit(0);}
    | ob S ob {printf("Final result : valid Expression \n"); exit(0);}
    ;

E : letter T {printf("variable letter\n");};


T: letter T {printf("letter term\n");}| digit {printf("digit\n");};

%%

int yyerror(char *msg)
{
printf("Invalid Expression or identifier\n");
exit(0);
}

int main ()
{
    // main method
printf("Enter the expression: ");
yyparse();
}

