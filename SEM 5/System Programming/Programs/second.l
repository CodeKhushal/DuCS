%{
	#include<stdio.h>
	int lines = 0;
	int words = 0;
%}

%%
([ ])+ words++;
\n lines++;
%%

int main()
{
	printf("Opening the file.....");
	extern FILE *yyin;
	yyin = fopen("file.text", "r");
	yylex();
	printf("\nNo. of words: %d\nNo. of lines: %d\n", words, lines);
	fclose(yyin);
	return 0;
}
