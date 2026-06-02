/*
6.
Write a function that computes the value of the following polynomial:

3x5 + 2x4 – 5x3 – x2 + 7x – 6

Write a program that asks the user to enter a value for x, calls the function to compute the
value of the polynomial, and then displays the value returned by the function.
*/

#include <stdio.h>

double compute_polynomial(double x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}

int main(void)
{
    double x, result;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    result = compute_polynomial(x);

    printf("The value of the polynomial is: %lf\n", result);

    return 0;
}