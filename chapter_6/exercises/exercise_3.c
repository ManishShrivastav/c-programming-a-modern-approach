/*
*3.
What output does the following for statement produce?
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);

    My Assessment 4 3 2 1

    I was wrong, the output is actually 5 4 3 2. This is because, between the condition expressions i > 0, j > 0, only j > 0 is evaluated. Why? That's how , operator works in C.
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 5, j = i -1; i > 0, j > 0; --i, j = i -1)
    {
        printf("%d ", i);
    }
    
}