/*
9.
Programming Project 8 in Chapter 2 asked you to write a program that calculates the
remaining balance on a loan after the first, second, and third monthly payments. Modify the
program so that it also asks the user to enter the number of payments and then displays the
balance remaining after each of these payments.

#include <stdio.h>

int main(void)
{
    float loan_amount, annual_interest_rate, monthly_payment, monthly_interest_rate;
    float remaining_balance;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &annual_interest_rate);
    monthly_interest_rate = (annual_interest_rate / 100.0f) / 12;
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float month_one_remaining_balance = loan_amount - monthly_payment + (loan_amount * monthly_interest_rate);
    float month_two_remaining_balance = month_one_remaining_balance - monthly_payment + (month_one_remaining_balance * monthly_interest_rate);
    float month_three_remaining_balance = month_two_remaining_balance - monthly_payment + (month_two_remaining_balance * monthly_interest_rate);
    
    printf("Balance remaining after first payment: $%.2f\n", month_one_remaining_balance);
    printf("Balance remaining after second payment: $%.2f\n", month_two_remaining_balance);
    printf("Balance remaining after third payment: $%.2f\n", month_three_remaining_balance);
    return 0;
}
*/

#include <stdio.h>

int main(void)
{
    float loan_amount, annual_interest_rate, monthly_payment, monthly_interest_rate;
    int num_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &annual_interest_rate);

    monthly_interest_rate = (annual_interest_rate / 100.0f) / 12;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_payments);

    float remaining_balance = loan_amount;

    for (int i = 1; i <= num_payments; i++)
    {
        remaining_balance = remaining_balance - monthly_payment
                            + (remaining_balance * monthly_interest_rate);

        printf("Balance remaining after payment %d: $%.2f\n",
               i, remaining_balance);
    }

    return 0;
}