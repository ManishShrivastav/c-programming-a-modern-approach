#include <stdio.h>
#include "stack.h"

int main(void)
{
    char ch;
    int operand1, operand2;

    printf("Enter an RPN expression: ");
    while (scanf(" %c", &ch) == 1 && ((ch >= '0' && ch <= '9') || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '='))
    {
        if (ch >= '0' && ch <= '9')
        {
            push(ch - '0'); /* convert char to int */
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (is_empty())
                stack_underflow();

            operand2 = pop();

            if (is_empty())
                stack_underflow();

            operand1 = pop();

            switch (ch)
            {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
            }
        }
        else if (ch == '=')
        {
            if (is_empty())
                stack_underflow();

            printf("Value of expression: %d\n", pop());
            make_empty();
            printf("Enter an RPN expression: ");
        }
    }

    return 0;
}