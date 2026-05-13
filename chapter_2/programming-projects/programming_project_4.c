/*
Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>

int main(void)
{
    float amount, total_amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    total_amount = amount + (amount * 5.0f/100);

    printf("With tax added: $%.2f\n", total_amount);
    return 0;

}