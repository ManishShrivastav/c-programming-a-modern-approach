/*
19.
18.Write a recursive version of the gcd function (see Exercise 3). Here’s the strategy to use for
computing gcd(m, n): If n is 0, return m. Otherwise, call gcd recursively, passing n as
the first argument and m % n as the second.

    Exercise 3:
            #include <stdio.h>

            int gcd(int m, int n);

            int main(void)
            {
                int m, n;

                printf("Enter two integers: ");
                scanf("%d %d", &m, &n);

                printf("The greatest common divisor of %d and %d is %d.\n", m, n, gcd(m, n));

                return 0;
            }

            int gcd(int m, int n)
            {
                int temp;

                while (n != 0) {
                    temp = n;
                    n = m % n;
                    m = temp;
                }

                return m;
            }
    */

#include <stdio.h>

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}

int main(void)
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("The greatest common divisor of %d and %d is %d.\n", m, n, gcd(m, n));

    return 0;
}