/*
11.
The value of the mathematical constant e can be expressed as an infinite series:
    e = 1 + 1/1! + 1/2! + 1/3! + ...
Write a program that approximates e by computing the value of
    1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
where n is an integer entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int n;
    float factorial = 1.0f;
    float sum = 1.0f;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += (1.0f / factorial) ;
    }

    printf("The value of e =  %.6f", sum);

    return 0;
}