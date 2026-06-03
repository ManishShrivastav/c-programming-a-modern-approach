/*
7.
Write the following function:

void split_date(int day_of_year, int year, int *month, int *day);

day_of_year is an integer between 1 and 366, specifying a particular day within the year
designated by year. month and day point to variables in which the function will store the
equivalent month (1–12) and day within that month (1–31).
*/

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int day_of_year, year, month, day;

    printf("Enter a day of the year (1-366): ");
    scanf("%d", &day_of_year);
    printf("Enter a year: ");
    scanf("%d", &year);

    split_date(day_of_year, year, &month, &day);

    printf("The equivalent month is: %d\n", month);
    printf("The equivalent day is: %d\n", day);

    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29; // February has 29 days in a leap year
    }

    int month_index = 0;

    while (day_of_year > days_in_month[month_index]) 
    {
        day_of_year -= days_in_month[month_index];
        month_index++;
    }

    *month = month_index + 1; // month is 1-based
    *day = day_of_year;
}