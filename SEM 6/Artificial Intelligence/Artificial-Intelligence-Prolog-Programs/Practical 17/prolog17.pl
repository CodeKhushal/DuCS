delete_element(1,[H|T],T).
delete_element(N,[H|T],[H|R]):- N1 is N-1, delete_element(N1,T,R).
