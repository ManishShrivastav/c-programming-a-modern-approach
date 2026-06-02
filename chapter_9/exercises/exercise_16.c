/*
16.Condense the fact function in the same way we condensed power.

        int fact(int n)
        {
        if (n <= 1)
            return 1;
        else
            return n * fact(n - 1);
        }
*/

#include <stdio.h>

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main(void)
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, fact(number));

    return 0;
}