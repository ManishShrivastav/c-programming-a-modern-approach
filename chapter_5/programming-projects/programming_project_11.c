/*
Write a program that asks the user for a two-digit number, then prints the English word for
the number:
Enter a two-digit number: 45
You entered the number forty-five.
Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit (“twenty,” “thirty,” and so forth). Use a second switch statement to print the
word for the second digit. Don’t forget that the numbers between 11 and 19 require special
treatment.
*/

#include <stdio.h>

int main(void)
{
    int number, tens_digit, ones_digit;
    char *tens = "", *ones = "";

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    tens_digit = number / 10;
    ones_digit = number % 10;

    if (tens_digit == 1)
    {
        switch (ones_digit)
        {
            case 0: ones = "ten"; break;
            case 1: ones = "eleven"; break;
            case 2: ones = "twelve"; break;
            case 3: ones = "thirteen"; break;
            case 4: ones = "fourteen"; break;
            case 5: ones = "fifteen"; break;
            case 6: ones = "sixteen"; break;
            case 7: ones = "seventeen"; break;
            case 8: ones = "eighteen"; break;
            case 9: ones = "nineteen"; break;
        }

        printf("You entered the number %s.\n", ones);
    }
    else
    {
        switch (tens_digit)
        {
            case 2: tens = "twenty"; break;
            case 3: tens = "thirty"; break;
            case 4: tens = "forty"; break;
            case 5: tens = "fifty"; break;
            case 6: tens = "sixty"; break;
            case 7: tens = "seventy"; break;
            case 8: tens = "eighty"; break;
            case 9: tens = "ninety"; break;
        }

        switch (ones_digit)
        {
            case 1: ones = "one"; break;
            case 2: ones = "two"; break;
            case 3: ones = "three"; break;
            case 4: ones = "four"; break;
            case 5: ones = "five"; break;
            case 6: ones = "six"; break;
            case 7: ones = "seven"; break;
            case 8: ones = "eight"; break;
            case 9: ones = "nine"; break;
        }
        
        if (tens_digit == 0)
            printf("You entered the number %s.\n", ones);
        else if (ones_digit == 0)
            printf("You entered the number %s.\n", tens);
        else
            printf("You entered the number %s-%s.\n", tens, ones);
    }    
    return 0;
    
}