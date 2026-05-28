/*
8.
Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-
hour clock. The input will have the form hours:minutes followed by either A, P, AM, or PM
(either lower-case or upper-case). White space is allowed (but not required) between the
numerical time and the AM/PM indicator. Examples of valid input:
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
You may assume that the input has one of these forms; there is no need to test for errors.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes, user_time;
    char period1, period2;
    char ch;

    printf("Enter a 12-hour time: ");

    /* Read time like 1:15PM, 1:15 PM, etc. */
    scanf("%d:%d %c%c", &hours, &minutes, &period1, &period2);

    /* Normalize to uppercase */
    period1 = toupper(period1);
    period2 = toupper(period2);

    /* Convert to minutes since midnight */
    if (period1 == 'P' && hours != 12)
        hours += 12;

    if (period1 == 'A' && hours == 12)
        hours = 0;

    user_time = hours * 60 + minutes;

    if (user_time < (480 + 583) / 2)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");

    else if (user_time < (583 + 679) / 2)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");

    else if (user_time < (679 + 767) / 2)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");

    else if (user_time < (767 + 840) / 2)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");

    else if (user_time < (840 + 945) / 2)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");

    else if (user_time < (945 + 1140) / 2)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");

    else if (user_time < (1140 + 1305) / 2)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");

    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}