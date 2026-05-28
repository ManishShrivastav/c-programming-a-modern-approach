/*
12.
Write a program that evaluates an expression:

Enter an expression: 1+2.5*3
Value of expression: 10.5

The operands in the expression are floating-point numbers; the operators are +, -, *, and /.
The expression is evaluated from left to right (no operator takes precedence over any other
operator).
*/

#include <stdio.h>

int main(void)
{
    double result, number;
    char op;

    printf("Enter an expression: ");

    /* read first number */
    scanf("%lf", &result);

    /* read operator and next number repeatedly */
    while ((op = getchar()) != '\n') {

        if (op == ' ')
            continue;

        scanf("%lf", &number);

        switch (op) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                result /= number;
                break;
        }
    }

    printf("Value of expression: %.1f\n", result);

    return 0;
}