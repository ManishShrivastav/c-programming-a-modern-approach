/*
4.
Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the
pointer variable top_ptr instead of the integer variable top.

#include <stdbool.h>
#define STACK_SIZE 100
int contents[STACK_SIZE];
int top = 0;

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
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = i;
    }
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}
*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 100
int contents[SIZE];
int *top_ptr = contents;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);   
void stack_overflow(void);
void stack_underflow(void); 

void make_empty(void)
{
    top_ptr = contents;
}

bool is_empty(void)
{
    return top_ptr == contents;
}

bool is_full(void)
{
    return top_ptr == contents + SIZE;
}

void push(int i)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        *top_ptr++ = i;
    }
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return *--top_ptr;
    }
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}

int main(void)
{
    push(10);
    push(20);
    push(30);

    while (!is_empty())
    {
        printf("%d\n", pop());
    }

    return 0;
}