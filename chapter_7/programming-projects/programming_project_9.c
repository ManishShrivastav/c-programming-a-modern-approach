/*
9.
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour
form:
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, min;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &ch);

    ch = toupper(ch);

    if (ch == 'P') {
        if (hour != 12)
            hour += 12;
    }
    else { /* AM */
        if (hour == 12)
            hour = 0;
    }

    printf("Equivalent 24-hour time: %02d:%02d %c\n", hour, min, ch);

    return 0;
}