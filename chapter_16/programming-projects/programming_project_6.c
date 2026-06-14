/*
6.
Modify Programming Project 9 from Chapter 5 so that each date entered by the user is
stored in a date structure (see Exercise 5). Incorporate the compare_dates function of
Exercise 5 into your program.
*/

#include <stdio.h>

struct date { int month, day, year; };

int compare_dates(struct date d1, struct date d2);

int main(void)
{
	struct date date1, date2;
	int earlier_date = 0;

	printf("Enter first date (mm/dd/yy): ");
	scanf(" %d /%d /%d", &date1.month, &date1.day, &date1.year);

	printf("Enter second date (mm/dd/yy): ");
	scanf(" %d /%d /%d", &date2.month, &date2.day, &date2.year);

	earlier_date = compare_dates(date1, date2);

	if (earlier_date == -1)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
				date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
	else if (earlier_date == 1)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
				date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
	else
		printf("Both dates are the same\n");

	return 0;
}


int compare_dates(struct date d1, struct date d2)
{
	if (d1.year > d2.year)
		return 1;
	else if (d1.year < d2.year)
		return -1;
	else
	{
		if (d1.month > d2.month)
			return 1;
		else if (d1.month < d2.month)
			return -1;
		else
		{
			if (d1.day > d2.day)
				return 1;
			else if (d1.day < d2.day)
				return -1;
		}
	}

	return 0;
}