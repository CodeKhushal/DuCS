member(X,[X|_]).
member(X,[Y|L]):- member(X,L).
