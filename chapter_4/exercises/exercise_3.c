/*
What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

In C89, the result of integer division with negative operands is implementation-defined.
The quotient may be rounded either toward zero or toward negative infinity.

(a) 8 / 5 ---> 1


(b) -8 / 5 ---> -1 (Rounded toward zero) or -2 (Rounded toward negative infinity)
(c) 8 / -5 ---> -1 (Rounded toward zero) or -2 (Rounded toward negative infinity)
(d) -8 / -5 ---> 1 Both rounding methods give 1.

In C89, integer division with negative numbers was implementation-defined.
That means different compilers were allowed to round differently.

For:

    -8 / 5

the real mathematical result is:

    -1.6

Now there are two possible ways to convert this to an integer.

--------------------------------------------------

1. Truncate toward zero

This drops the fractional part.

    -1.6 -> -1

So:

    -8 / 5 == -1

--------------------------------------------------

2. Round toward negative infinity (floor)

This rounds downward on the number line.

    -1.6 -> -2

So:

    -8 / 5 == -2

--------------------------------------------------

Visual number line:

    -2 -------- -1
          -1.6

Toward 0  -> -1
Toward -∞ -> -2

--------------------------------------------------

That is why in C89:

    -8 / 5

could legally produce either:

    -1 or -2

depending on the compiler.

--------------------------------------------------

In modern C (C99 and later), division always truncates toward zero:

    -8 / 5 == -1
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