/*
5. 
Write a function num_digits(n) that returns the number of digits in n (a positive inte-
ger). Hint: To determine the number of digits in a number n, divide it by 10 repeatedly.
When n reaches 0, the number of divisions indicates how many digits n originally had.
*/

#include <stdio.h>

int num_digits(int n);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of digits in %d is %d\n", n, num_digits(n));
}


int num_digits(int n)
{
    int num_of_digits = 0;

    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        n /= 10;
        num_of_digits++;
    }

    return num_of_digits;
    
}