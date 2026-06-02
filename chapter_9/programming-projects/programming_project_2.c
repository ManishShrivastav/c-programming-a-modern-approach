/*
2.
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
amount of income tax. When passed an amount of taxable income, the function will return
the tax due.
*/

#include <stdio.h>

float compute_tax(float income);

int main(void)
{
    float income;

    printf("Enter taxable income: $");
    scanf("%f", &income);    
    
    printf("Tax due: $%.2f\n", compute_tax(income));
    
    return 0;
}

float compute_tax(float income)
{
    float tax =  0.0f;

    if (income <= 750.00f)
        tax = 0.01f * income;
    else if (income <= 2250.00f)
        tax = 7.5f + 0.02f * (income - 750.00f);
    else if (income <= 3750)
        tax = 37.5f + 0.03f * (income - 2250.00f) ;
    else if (income <= 5250.00f)
        tax = 82.50f + 0.04f * (income - 3750.00f);
    else if (income <= 7000.00f)
        tax = 142.50f + 0.05f * (income - 5250.00f);
    else
        tax = 230.00f + 0.06f * (income - 7000.00f);

    return tax;
}