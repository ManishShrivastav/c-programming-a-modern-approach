/*
12.
Modify Programming Project 11 so that the program continues adding terms until the cur-
rent term becomes less than ε, where ε is a small (floating-point) number entered by the
user.
*/

#include <stdio.h>

int main(void)
{
    float epsilon;
    float factorial = 1.0f;
    float sum = 1.0f;
    int i = 1;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    while (1)
    {
        factorial *= i;

        float term = 1.0f / factorial;

        if (term < epsilon)
            break;

        sum += term;
        i++;
    }

    printf("Approximation of e = %.6f\n", sum);

    return 0;
}