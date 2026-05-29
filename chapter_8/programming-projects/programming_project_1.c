/*
1.
Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
were repeated:
Enter a number: 939577
Repeated digit(s): 7 9
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false},
    repeated[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            repeated[digit] = true;
        }
        else
        {        
            digit_seen[digit] = true;
        }
        n /= 10;        
    }

    printf("Repeated digit(s): ");

    for (int i = 0; i < 10; i++)
    {
        if (repeated[i])
        {
            printf(" %d", i);
        }
        
    }

    printf("\n");

    return 0;    
}