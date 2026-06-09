/*
15.
Modify Programming Project 6 from Chapter 10 so that it includes the following function:

int evaluate_RPN_expression(const char *expression);

The function returns the value of the RPN expression pointed to by expression.
*/

#include <stdio.h>
#include <stdlib.h> /* exit */
#include <stdbool.h> /* C99+ only */

#define STACK_SIZE 100
/* external variables */
int contents[STACK_SIZE];
int top = 0;
/***************** function prototypes *****************/
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

int main(void)
{
    char expression[100];

    printf("Enter an RPN expression: ");
    scanf("%s", expression);

    int result = evaluate_RPN_expression(expression);
    printf("The value of the RPN expression is: %d\n", result);

    return 0;
}

int evaluate_RPN_expression(const char *expression)
{
    char ch;
    int operand1, operand2;

    for (int i = 0; expression[i] != '\0'; i++)
    {
        ch = expression[i];

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
    }

    if (!is_empty())
        return pop();
    else
    {
        stack_underflow();
        return 0; /* This line will never be reached, but it prevents a compiler warning. */
    }
}

/***************** function definitions *****************/
void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
        return 0; /* This line will never be reached, but it prevents a compiler warning. */
    }
    else
        return contents[--top];
}
void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}
void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}   

