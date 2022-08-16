%{
	#include<stdio.h>
	int vcount = 0;
	int ccount = 0;
%}

%%
[aeiouAEIOU] {vcount++;}
[A-Za-z] {ccount++;}
%%

int main()
{
	printf("Enter the string: ");
	yylex();
	printf("No. of vowels: %d\nNo. of consonants: %d\n", vcount, ccount);
	return 0;
}
	
