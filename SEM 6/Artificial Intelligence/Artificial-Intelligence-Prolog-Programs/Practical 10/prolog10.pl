append([],L,L).
append([X|L1],L2,[X|L3]):- append(L1,L2,L3).
reverse([],[]).
reverse([H|T],R):-reverse(T,L1),append(L1,[H],R).
