% Facts
father(john, jim).
mother(jane, jim).
father(jack, john).

% Rules
parent(Person1, Person2):-
    father(Person1, Person2).

parent(Person1, Person2):-
    mother(Person1, Person2).

grandparent(Person1, Person2):-
    parent(Person3, Person2),
    parent(Person1, Person3).