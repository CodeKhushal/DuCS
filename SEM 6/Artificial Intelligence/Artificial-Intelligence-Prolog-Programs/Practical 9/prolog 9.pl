conc([], List, List).
conc([X|L1],L2,[X|L3]):- conc(L1, L2, L3).
