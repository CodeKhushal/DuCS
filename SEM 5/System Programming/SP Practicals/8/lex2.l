%{
#include<strings.h>
int opcount=0,intcount=0,check=1,top=0, prnt=0;;
%}

%%
['('] {check=0;}
[')'] {check=1;}
[+|*|/|-] {opcount++; prnt=1;}
[0-9]+ {intcount++; prnt=1;}
. {printf("Input is Invalid (only digits and +|-|*|/ is valid\n");}
[\n] {
if(prnt==1)
{
  if(intcount==opcount+1)
  {
    if(check==1)
    {
      printf("\nCORRECT Expression!\n");
    }
    else{
      printf("\n')' bracket missing from expression\n");
    }
  }
  
  else
  {
    printf("\n INCORRECT Expression!\n");
  }
  prnt=0;
  opcount=0;
  intcount=0;
  check=1;
  printf("\nEnter expression : ");
}

else
{
  printf("Please, Continue or terminate by(ctrl+c). ");
  printf("\nEnter expression : ");
}
}
%%

int main()
{
  printf("Enter expression : ");
  yylex();
  return 0;
}
