/*
19.

Consider the following “mystery” function:

    void pb(int n)
    {
        if (n != 0) {
            pb(n / 2);
            putchar('0' + n % 2);
        }
    }

Trace the execution of the function by hand. Then write a program that calls the function,
passing it a number entered by the user. What does the function do?

======>
        This is recursive, and it prints after the recursive call.

        n / 2 keeps dividing the number down until it reaches 0.
        n % 2 extracts the last binary digit (0 or 1).
        Because printing happens after recursion, digits come out in the correct order.

*/

#include <stdio.h>

void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation: ");
    pb(number);
    printf("\n");

    return 0;
}