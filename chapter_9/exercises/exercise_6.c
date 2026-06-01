/*
6.
Write a function digit(n, k) that returns the kth digit (from the right) in n (a posi-
tive integer). For example, digit(829, 1) returns 9, digit(829, 2) returns 2, and
digit(829, 3) returns 8. If k is greater than the number of digits in n, have the func-
tion return 0.
*/

#include <stdio.h>

int digit(int n, int k);

int main(void)
{
    printf("%d\n", digit(829, 1));
    printf("%d\n", digit(829, 2));
    printf("%d\n", digit(829, 3));
    printf("%d\n", digit(829, 4));

    return 0;
}

int digit(int n, int k)
{
    int i;

    for (i = 1; i < k; i++)
    {
        n /= 10;

        if (n == 0)
            return 0;
    }

    return n % 10;
}