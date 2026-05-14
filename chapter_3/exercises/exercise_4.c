/*
Suppose that we call scanf as follows:
scanf("%d%f%d", &i, &x, &j);
If the user enters
10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are int variables
and x is a float variable.)
    --->>
            My GUESS:
                    The value of i will be 10, x will be 0.3, and j will be 5 and 6 remains unread
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    printf("Enter the numbers: ");
    scanf("%d%f%d", &i, &x, &j);
    printf("i = %d, x = %f, j = %d\n", i, x, j);
}

/* 
    output:
            Enter the numbers: 10.3 5 6
            i = 10, x = 0.300000, j = 5
*/

        