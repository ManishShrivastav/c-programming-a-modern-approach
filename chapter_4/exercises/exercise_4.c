/*
Repeat Exercise 3 for C99.

3 is:
"What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

In C89, the result of integer division with negative operands is implementation-defined.
The quotient may be rounded either toward zero or toward negative infinity."

ANSWER:
In C99, integer division always truncates toward zero.

(a) 8 / 5

    1

--------------------------------------------------

(b) -8 / 5

Real value:

    -1.6

Truncated toward zero:

    -1

So:

    -8 / 5 == -1

--------------------------------------------------

(c) 8 / -5

Real value:

    -1.6

Truncated toward zero:

    -1

So:

    8 / -5 == -1

--------------------------------------------------

(d) -8 / -5

Real value:

    1.6

Truncated toward zero:

    1

So:

    -8 / -5 == 1
*/

#include <stdio.h>

int main(void)
{
    printf("%d\n", 8 / 5);
    printf("%d\n", - 8 / 5);
    printf("%d\n", 8 / -5);
    printf("%d\n", -8 / -5);
    return 0;
}