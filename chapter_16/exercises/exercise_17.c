/*
17.
Suppose that b and i are declared as follows:
enum {FALSE, TRUE} b;
int i;
Which of the following statements are legal? Which ones are “safe” (always yield a mean-
ingful result)?

(a) b = FALSE;
    ANSWER: Legal and safe. FALSE is a valid enumerator for the enum type of b, and it will yield a meaningful result when assigned to b.

(b) b = i;
    ANSWER: Legal but not safe. The value of i may not be a valid enumerator for the enum type of b. 
    Assigning an integer to an enum variable is allowed in C, but it may lead to undefined behavior if 
    the value of i does not correspond to any of the enumerators defined in the enum type.
    
(c) b++;
    ANSWER: Legal but not safe. Incrementing an enum variable is allowed in C, but it may lead to undefined behavior if 
    the resulting value does not correspond to any of the enumerators defined in the enum type.
(d) i = b;
    ANSWER: Legal and safe. The value of b is a valid integer, and it will yield a meaningful result when assigned to i.
(e) i = 2 * b + 1;
    ANSWER: Legal and safe. The value of b is a valid integer, and it will yield a meaningful result when used in the expression.
*/