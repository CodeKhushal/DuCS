evelen([]).
evelen([_|[_|List]]):- evelen(List).
oddlen([_]).
oddlen([_|[_|List]]):- oddlen(List).
