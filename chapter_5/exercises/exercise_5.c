/*
    Is the following if statement legal?
    if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
    If so, what does it do when n is equal to 0?

--->    Yes, the statement is legal in C, but it does NOT do what it looks like mathematically.

        Expression

        n >= 1 <= 10

        How C interprets it
        Relational operators are evaluated left to right, so it is grouped as:
            (n >= 1) <= 10

                Step 1: Evaluate (n >= 1)
                This produces:

                1 if true
                0 if false

                So the expression becomes either:

                1 <= 10
                or
                0 <= 10
                Step 2: Evaluate comparison with 10

                Both cases are true:

                1 <= 10 → true (1)
                0 <= 10 → true (1)

                So the whole condition is always true.

        When n = 0

        Step-by-step:

        n >= 1 → 0
        0 <= 10 → true

        So the if condition succeeds and the printf executes.

        Key point

        n >= 1 <= 10 does NOT mean “n is between 1 and 10”.

        It actually means:
        ((n >= 1) <= 10) → always true in C

        Correct way to write it

        n >= 1 && n <= 10
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    if (n >= 1 <= 10)
    {        
        printf("n is between 1 and 10\n");
    }
    return 0;
}