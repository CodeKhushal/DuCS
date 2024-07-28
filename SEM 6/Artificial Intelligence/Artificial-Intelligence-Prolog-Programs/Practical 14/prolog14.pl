nthele(1,[H|T],H).
nthele(N,[H|T],X):- N1 is N-1, nthele(N1,T,X).
