# Write a program in PROLOG to implement factorial (N, F) where F represents the factorial of a number N.

factorial(0, 1).

factorial(N, F):-
    N1 is N-1,
    factorial(N1, Y),
    F is Y*N.