/*
15.
Write a loop that prints all temperature readings stored in row i of the temperatures
array (see Exercise 14). Use a pointer to visit each element of the row.

int temperatures[7][24] = {
        {30, 31, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8},
        {31, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10},
        {29, 30, 31, 32, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14},
        {28},
        {27},
        {26},
        {25}
    };
*/

#include <stdio.h>

int main(void)
{
	int temperatures[7][24] = {
        {30, 31, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8},
        {31, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10},
        {29, 30, 31, 32, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14},
        {28},
        {27},
        {26},
        {25}
    };
	int *p;
    int i;

    printf("Enter the row number (1-7): ");
    scanf("%d", &i);

	
    // Loop for processing row i (the required loop)
    for (p = temperatures[i - 1]; p < temperatures[i - 1] + 24; p++)
    {
        printf("%d ", *p);
    }
    
    putchar('\n');

	return 0;
}
