# Write a prolog program to calculate the sum of two numbers.

sum(X, Y, Z):- Z is X + Y, 
    write('Sum of '), 
    write(X), 
    write(' and '), 
    write(Y), 
    write(' is '), 
    write(Z),!.