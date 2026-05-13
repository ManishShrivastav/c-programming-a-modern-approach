/*
Insert spaces between the tokens in Exercise 8 to make the statement easier to read.

answer = (3 * q - p * p) / 3;
*/

#include <stdio.h>

int main(void) 
{
    int p = 5;
    int q = 10;
    int answer;

    answer = (3 * q - p * p) / 3;

    printf("The answer is %d\n", answer);

    return 0;
}
