/*
2. Extend the program in Programming Project 1 to handle three-digit numbers.

1 is.
Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 28
The reversal is: 82
Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
is the last digit in n and n / 10 is n with the last digit removed.
*/

#include <stdio.h>

int main(void)
{
    int num;
    int ones, tens, hundreds;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    ones = num % 10;
    tens = (num / 10) % 10;
    hundreds = num / 100;
    printf("The reversal is: %d%d%d\n", ones, tens, hundreds);
    return 0;
}