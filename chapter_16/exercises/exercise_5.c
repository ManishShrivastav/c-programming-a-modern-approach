/*
5.
Write the following functions, assuming that the date structure contains three members:
month, day, and year (all of type int).

(a) int day_of_year(struct date d);
Returns the day of the year (an integer between 1 and 366) that corresponds to the date d.

(b) int compare_dates(struct date d1, struct date d2);
Returns –1 if d1 is an earlier date than d2, +1 if d1 is a later date than d2, and 0 if d1 and
d2 are the same.
*/

// a)

struct date
{
    int month, day, year;
};

int day_of_year(struct date d)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Detect Leap year
    if (!(d.year % 400) || (!(d.year % 4) && (d.year % 100)))
    {
        days_in_month[1] = 29;
    }

    int total_days = d.day;

    while (d.month-- > 1)
    {
        total_days += days_in_month[d.month - 1];
    }
    
    return total_days;
}

// b)

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }

    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.month > d2.month)
    {
        return 1;
    }
    else if (d1.month < d2.month)
    {
        return -1;
    }
    else if (d1.day > d2.day)
    {
        return 1;
    }
    else if (d1.day < d2.day)
    {
        return -1;
    }

    return 0;    
}


#include <stdio.h>

/* Your day_of_year() function */
/* Your compare_dates() function */

int main(void)
{
    struct date d1 = {3, 1, 2024};   /* March 1, 2024 */
    struct date d2 = {12, 31, 2024}; /* December 31, 2024 */

    printf("d1: %d/%d/%d\n", d1.month, d1.day, d1.year);
    printf("Day of year: %d\n\n", day_of_year(d1));

    printf("d2: %d/%d/%d\n", d2.month, d2.day, d2.year);
    printf("Day of year: %d\n\n", day_of_year(d2));

    int result = compare_dates(d1, d2);

    if (result < 0)
        printf("d1 is earlier than d2\n");
    else if (result > 0)
        printf("d1 is later than d2\n");
    else
        printf("d1 and d2 are the same date\n");

    return 0;
}