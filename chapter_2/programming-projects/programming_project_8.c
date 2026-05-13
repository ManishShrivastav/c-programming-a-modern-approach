/*
Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Display each balance with two digits after the decimal point. Hint: Each month, the balance
is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
a percentage and divide it by 12.
*/

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