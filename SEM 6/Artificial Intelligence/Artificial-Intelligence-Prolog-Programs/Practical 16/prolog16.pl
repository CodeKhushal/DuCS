insert_nth(I,1,List,[I,List]).
insert_nth(I,N,[H|T],[H|R]):- N1 is N-1, insert_nth(I,N1,T,R).
