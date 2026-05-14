/*
Suppose that we call scanf as follows:
scanf("%f%d%f", &x, &i, &y);
If the user enters
12.3 45.6 789
what will be the values of x, i, and y after the call? (Assume that x and y are float vari-
ables and i is an int variable.)

    --->> My GUESS:
                The value of x will be 12.3, i will be 45 and y will be 0.6 and 789 remains unread.

*/

#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    printf("Enter the numbers: ");
    scanf("%f%d%f", &x, &i, &y);
    printf("x = %f, i = %d, y = %f\n", x, i, y);
}

/*
    output:
            Enter the numbers: 12.3 45.6 789
            x = 12.300000, i = 45, y = 0.600000
*/