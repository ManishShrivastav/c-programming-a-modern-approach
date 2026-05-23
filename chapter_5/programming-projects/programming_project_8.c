/*
8.
    The following table shows the daily flights from one city to another:

        Departure time          Arrival time
        8:00 a.m.               10:16 a.m.
        9:43 a.m.               11:52 a.m.
        11:19 a.m.              1:31 p.m.
        12:47 p.m.              3:00 p.m.
        2:00 p.m.               4:08 p.m.
        3:45 p.m.               5:55 p.m.
        7:00 p.m.               9:20 p.m.
        9:45 p.m.               11:58 p.m.


    Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
    hour clock). The program then displays the departure and arrival times for the flight whose
    departure time is closest to that entered by the user:

        Enter a 24-hour time: 13:15
        Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

    Hint: Convert the input into a time expressed in minutes since midnight, and compare it to
    the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 ×
    60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
    midnight) than to any of the other departure times.

    ---> The user’s time should belong to whichever flight is closer.

            Example:

            8:00 a.m. → 480 minutes
            9:43 a.m. → 583 minutes

            The boundary between them is halfway:

            480+583 / 2 = 531

            531 minutes after midnight = 8:51 a.m.

            So:

            if the entered time is before 8:51, it’s closer to 8:00
            if it’s after 8:51, it’s closer to 9:43

            That’s why the condition is:

            if (user_time < (480 + 583) / 2)
*/

#include <stdio.h>

int main(void)
{
    int hours, minutes, user_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

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