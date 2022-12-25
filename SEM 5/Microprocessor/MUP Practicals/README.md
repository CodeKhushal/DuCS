# Microprocessor

### 1. Write a Lex program to count the number of lines and characters in the input file. 
### 2. Write a Lex program that implements the Caesar cipher: it replaces every letter with the one three letters after in alphabetical order, wrapping around at Z. e.g. a is replaced by d, b by e, and so on z by c. 
### 3. Write a Lex program that finds the longest word (defined as a contiguous string of upper and lower-case letters) in the input
### 4. Write a Lex program that distinguishes keywords, integers, floats, identifiers, operators, and comments in any simple programming language
### 5. Write a Lex program to count the number of identifiers in a C file. 
### 6. Write a Lex program to count the number of words, characters, blank spaces and lines in a C file.
### 7. Write a Lex specification program that generates a C program which takes a string “abcd” and prints the following output. 
###    abcd 	abc 	ab 	a
### 8. A program in Lex to recognize a valid arithmetic expression. 
### 9. Write a YACC program to find the validity of a given expression (for operators + - * and /) 
### 10. A Program in YACC which recognizes a valid variable which starts with a letter followed by a digit. The letter should be in lowercase only.
### 11. A Program in YACC to evaluate an expression (simple calculator program for addition and subtraction, multiplication, division). 
### 12. Program in YACC to recognize the strings “ab”, “aabb”, ”aaabbb”,… of the language (𝑎^𝑛 𝑏^𝑛 , n>=1). 
### 13. Program in YACC to recognize the language (𝑎^n 𝑏 , n>=10). (Output to say input is valid or not)

`lex file.l` <br>
`gcc lex.yy.c -lfl` <br>
`./a.out` <br>
`Input ←` <br>
`Ctrl + d  // yylex() exit point` <br>
`Output →` <br>
