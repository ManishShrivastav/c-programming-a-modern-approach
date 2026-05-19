/*
Repeat Exercise 5 for C99.

5 is:

What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)
(a) 8 % 5
(b) -8 % 5
(c) 8 % -5
(d) -8 % -5

ANSWER:
In C99, integer division always truncates toward zero.

The % operator follows:

    a % b = a - (a / b) * b

The remainder has the same sign as the left operand.

--------------------------------------------------

(a) 8 % 5

    8 / 5 = 1

So:

    8 % 5
    = 8 - (1 * 5)
    = 3

Result:

    3

--------------------------------------------------

(b) -8 % 5

    -8 / 5 = -1

So:

    -8 % 5
    = -8 - (-1 * 5)
    = -8 + 5
    = -3

Result:

    -3

--------------------------------------------------

(c) 8 % -5

    8 / -5 = -1

So:

    8 % -5
    = 8 - (-1 * -5)
    = 8 - 5
    = 3

Result:

    3

--------------------------------------------------

(d) -8 % -5

    -8 / -5 = 1

So:

    -8 % -5
    = -8 - (1 * -5)
    = -8 + 5
    = -3

Result:

    -3
*/


#include <stdio.h>

int main(void)
{
    printf("%d\n", 8 % 5);
    printf("%d\n", - 8 % 5);
    printf("%d\n", 8 % -5);
    printf("%d\n", -8 % -5);
    return 0;
}