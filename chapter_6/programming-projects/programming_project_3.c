/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:
    Enter a fraction: 6/12
    In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main(void)
{
    int num, den;
    int m, n, remainder, gcd;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    m = num;
    n = den;

    /* Euclid’s algorithm */
    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    /* reduce using original values */
    num /= gcd;
    den /= gcd;

    printf("In lowest terms: %d/%d\n", num, den);

    return 0;
}