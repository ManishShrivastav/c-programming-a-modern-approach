/*
3.
Write a function gcd(m, n) that calculates the greatest common divisor of the integers m
and n. (Programming Project 2 in Chapter 6 describes Euclid’s algorithm for computing the
GCD.)
*/

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