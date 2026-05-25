/*
10.
Programming Project 9 in Chapter 5 asked you to write a program that determines which of
two dates comes earlier on the calendar. Generalize the program so that the user may enter
any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date


chapter 5 Project
9.
Write a program that prompts the user to enter two dates and then indicates which date
comes earlier on the calendar:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08

*/

#include <stdio.h>

int main(void)
{
    int min_month, min_day, min_year;
    int month, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // initialize with first date (assuming it's not 0/0/0)
    min_month = month;
    min_day = day;
    min_year = year;

    while (month != 0 || day != 0 || year != 0)
    {
        if (year < min_year ||
           (year == min_year && month < min_month) ||
           (year == min_year && month == min_month && day < min_day))
        {
            min_year = year;
            min_month = month;
            min_day = day;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
    }

    printf("%d/%d/%02d is the earliest date\n",
           min_month, min_day, min_year);

    return 0;
}