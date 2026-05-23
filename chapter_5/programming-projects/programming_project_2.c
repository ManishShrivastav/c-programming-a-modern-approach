/*
2.
    Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:

    Enter a 24-hour time: 21:11
    Equivalent 12-hour time: 9:11 PM

    Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    printf("Equivalent 12-hour time: ");

    if (hour == 0)
    {
        printf("12:%02d AM\n", minute);
    }
    else if (hour < 12)
    {
        printf("%d:%02d AM\n", hour, minute);
    }
    else if (hour == 12)
    {
        printf("12:%02d PM\n", minute);
    }
    else
    {
        printf("%d:%02d PM\n", hour - 12, minute);
    }

    return 0;
}