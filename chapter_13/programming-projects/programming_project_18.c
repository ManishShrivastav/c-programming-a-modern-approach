/*
18.
Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-
plays it in the form month dd, yyyy, where month is the name of the month:

Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date February 17, 2011

Store the month names in an array that contains pointers to strings.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date format.\n");
        return EXIT_FAILURE;
    }

    printf("You entered the date %s %d, %d\n", months[month - 1], day, year);

    return EXIT_SUCCESS;
}

