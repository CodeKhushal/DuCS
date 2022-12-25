%{
	#include<stdio.h>
	int lines = 0;
	int characters = 0;
%}

%%
([a-zA-Z]) characters++;
\n lines++;
%%

int main()
{
	printf("Opening the file.....");
	extern FILE *yyin;
	yyin = fopen("file.text", "r");
	yylex();
	printf("\nNo. of characters: %d\nNo. of lines: %d\n", characters, lines);
	fclose(yyin);
	return 0;
}

