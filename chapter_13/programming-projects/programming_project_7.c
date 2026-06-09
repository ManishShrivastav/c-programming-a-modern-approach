/*
7.
Modify Programming Project 11 from Chapter 5 so that it uses arrays containing pointers to
strings instead of switch statements. For example, instead of using a switch statement
to print the word for the first digit, use the digit as an index into an array that contains the
strings "twenty", "thirty", and so forth.
*/

#include <stdio.h>

int main(void)
{
    int number, tens_digit, ones_digit;
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    tens_digit = number / 10;
    ones_digit = number % 10;

    if (tens_digit == 1)
    {
        printf("You entered the number %s.\n", teens[ones_digit]);
    }
    else
    {
        if (tens_digit > 1)
        {
            printf("You entered the number %s ", tens[tens_digit]);
        }
        if (ones_digit > 0)
        {
            printf("%s.\n", ones[ones_digit]);
        }
        else
        {
            printf(".\n");
        }
    }

    return 0;
}