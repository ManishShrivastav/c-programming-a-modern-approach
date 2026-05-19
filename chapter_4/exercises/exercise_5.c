/*
What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)
(a) 8 % 5
(b) -8 % 5
(c) 8 % -5
(d) -8 % -5

ANSWER:
In C89, the result of the % operator with negative operands is implementation-defined
because integer division with negative numbers is implementation-defined.

The % operator follows:

    a % b = a - (a / b) * b

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

Possible division results:

    -8 / 5 = -1   (truncate toward 0)
or
    -8 / 5 = -2   (round toward -∞)

Case 1:

    -8 % 5
    = -8 - (-1 * 5)
    = -8 + 5
    = -3

Case 2:

    -8 % 5
    = -8 - (-2 * 5)
    = -8 + 10
    = 2

Result:

    -3 or 2

--------------------------------------------------

(c) 8 % -5

Possible division results:

    8 / -5 = -1
or
    8 / -5 = -2

Case 1:

    8 % -5
    = 8 - (-1 * -5)
    = 8 - 5
    = 3

Case 2:

    8 % -5
    = 8 - (-2 * -5)
    = 8 - 10
    = -2

Result:

    3 or -2

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