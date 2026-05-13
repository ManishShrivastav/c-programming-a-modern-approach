/*
Modify the program of Programming Project 5 so that the polynomial is evaluated using the
following formula:
((((3x + 2)x – 5)x – 1)x + 7)x – 6
Note that the modified program performs fewer multiplications. This technique for evaluat-
ing polynomials is known as Horner’s Rule.
*/

#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    float result;

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("For x = %.2f, The result is %.2f", x, result);
    return 0;

}