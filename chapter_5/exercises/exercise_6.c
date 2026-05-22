/*
Is the following if statement legal?
if (n == 1-10)
printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5?

--->    Yes, the statement is legal in C, but it does NOT mean “n is between 1 and 10”.

            Statement

            n == 1 - 10

            Step 1: Operator precedence

            The subtraction is evaluated first, so the expression becomes:

            n == (1 - 10)

            Step 2: Evaluate arithmetic

            1 - 10 = -9

            So the expression becomes:

            n == -9

            Step 3: When n = 5

            Substitute:

            5 == -9

            This is false.

        Final result
        The condition is legal
        It checks whether n is equal to -9
        For n = 5, the if condition fails and nothing is printed

*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    if (n == 1-10)
    {        
        printf("n is between 1 and 10\n");
    }
    return 0;
}