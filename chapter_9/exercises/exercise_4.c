/*
4.
Write a function day_of_year(month, day, year) that returns the day of the year
(an integer between 1 and 366) specified by the three arguments.
*/

#include <stdio.h>

int day_of_year(int month, int day, int year); // Function prototype

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm dd yyyy): ");
    scanf("%d %d %d", &month, &day, &year);

    printf("The day of the year is: %d\n", day_of_year(month, day, year));

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int day_of_year = day;

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29; // February has 29 days in a leap year
    }

    for (int i = 0; i < month - 1; i++) {
        day_of_year += days_in_month[i];
    }

    return day_of_year;
}