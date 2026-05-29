/*
3.
Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
number to be tested for repeated digits. The program should terminate when the user enters
a number that’s less than or equal to 0.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int repeated_digits_count[10] = {false};
    long n;
    int digits;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0)
        {
            break;
        }
        

        while (n > 0)
        {
            digits = n % 10;
            repeated_digits_count[digits]++;
            n /= 10;
        }
        
        printf("Digit:\t\t  0  1  2  3  4  5  6  7  8  9\n");
        printf("Occurrences:\t");

        for (int i = 0; i < 10; i++)
        {
            printf("%3d", repeated_digits_count[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            repeated_digits_count[i] = 0;
        }
        
        printf("\n");
    }
    

    return 0;    
}