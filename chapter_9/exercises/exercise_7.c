/*
7.
7.Suppose that the function f has the following definition:
int f(int a, int b) { ... }
Which of the following statements are legal? (Assume that i has type int and x has type
double.)
(a) i = f(83, 12);          ---> legal, the function returns an int which can be assigned to i.
(b) x = f(83, 12);          ---> legal, the function returns an int which can be implicitly converted to double and assigned to x.
(c) i = f(3.15, 9.28);      ---> illegal, the function expects int arguments, but 3.15 and 9.28 are double literals. This will cause a compilation error due to type mismatch.
(d) x = f(3.15, 9.28);      ---> illegal, the function expects int arguments, but 3.15 and 9.28 are double literals. This will cause a compilation error due to type mismatch.
(e) f(83, 12);              ---> legal, the function call is valid and the return value (an int) is discarded.


*/