/*
6.

Some calculators (notably those from Hewlett-Packard) use a system of writing mathemati-
cal expressions known as Reverse Polish Notation (RPN). In this notation, operators are
placed after their operands instead of between their operands. For example, 1 + 2 would be
written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily
be evaluated using a stack. The algorithm involves reading the operators and operands in an
expression from left to right, performing the following actions:
When an operand is encountered, push it onto the stack.
When an operator is encountered, pop its operands from the stack, perform the opera-
tion on those operands, and then push the result onto the stack.
Write a program that evaluates RPN expressions. The operands will be single-digit integers.
The operators are +, –, *, /, and =. The = operator causes the top stack item to be displayed;
afterwards, the stack is cleared and the user is prompted to enter another expression. The
process continues until the user enters a character that is not an operator or operand:

Enter an RPN expression: 1 2 3 * + =
Value of expression: 7
Enter an RPN expression: 5 8 * 4 9 - / =
Value of expression: -8
Enter an RPN expression: q

If the stack overflows, the program will display the message Expression is too com-
plex and terminate. If the stack underflows (because of an expression such as 1 2 + +), the
program will display the message Not enough operands in expression and termi-
nate. Hints: Incorporate the stack code from Section 10.2 into your program. Use
scanf(" %c", &ch) to read the operators and operands.

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

int main(void)
{
    char ch;
    int operand1, operand2;

    printf("Enter an RPN expression: ");
    while (scanf(" %c", &ch) == 1 && (ch >= '0' && ch <= '9' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '='))
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
        stack_underflow();
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