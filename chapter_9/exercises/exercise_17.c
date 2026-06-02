
// 17.Rewrite the fact function so that it’s no longer recursive.


#include <stdio.h>
int fact(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    int result = fact(number);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}