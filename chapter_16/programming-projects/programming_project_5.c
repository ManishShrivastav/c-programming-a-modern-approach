/*
5.
Modify Programming Project 8 from Chapter 5 so that the times are stored in a single array.
The elements of the array will be structures, each containing a departure time and the corre-
sponding arrival time. (Each time will be an integer, representing the number of minutes
since midnight.) The program will use a loop to search the array for the departure time clos-
est to the time entered by the user.
*/

#include <stdio.h>
#define NUM_TIMES 8

struct flight
{
    int dep_time;
    int arv_time;
};

int from_24_hr_time_to_mins(int hours, int minutes);
int from_12_hr_time_to_mins(int hours, int minutes, char meridiem);
void from_mins_to_24_hr_time(int total_minutes, int *hours, int *minutes);
void from_24_to_12_hr_time(int *hours, char *meridiem);

int main(void)
{
    int hr_24form, mins, total_desired_time, i;
    int dep_hr, dep_min, arv_hr, arv_min;
    char dep_meridiem, arv_meridiem;

    struct flight daily_flights[NUM_TIMES] =
    {
        {from_12_hr_time_to_mins(8, 0, 'a'),   from_12_hr_time_to_mins(10, 16, 'a')},
        {from_12_hr_time_to_mins(9, 43, 'a'),  from_12_hr_time_to_mins(11, 52, 'a')},
        {from_12_hr_time_to_mins(11, 19, 'a'), from_12_hr_time_to_mins(1, 31, 'p')},
        {from_12_hr_time_to_mins(12, 47, 'p'), from_12_hr_time_to_mins(3, 0, 'p')},
        {from_12_hr_time_to_mins(2, 0, 'p'),   from_12_hr_time_to_mins(4, 8, 'p')},
        {from_12_hr_time_to_mins(3, 45, 'p'),  from_12_hr_time_to_mins(5, 55, 'p')},
        {from_12_hr_time_to_mins(7, 0, 'p'),   from_12_hr_time_to_mins(9, 20, 'p')},
        {from_12_hr_time_to_mins(9, 45, 'p'),  from_12_hr_time_to_mins(11, 58, 'p')}
    };

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr_24form, &mins);

    total_desired_time = from_24_hr_time_to_mins(hr_24form, mins);

    printf("Closest departure time is ");

    /* ✅ FIXED LOGIC: find closest flight */
    int closest = 0;
    int min_diff = 1440;

    for (i = 0; i < NUM_TIMES; i++)
    {
        int diff = total_desired_time - daily_flights[i].dep_time;

        if (diff < 0)
            diff = -diff;

        if (diff < min_diff)
        {
            min_diff = diff;
            closest = i;
        }
    }

    i = closest;

    from_mins_to_24_hr_time(daily_flights[i].dep_time, &dep_hr, &dep_min);
    from_24_to_12_hr_time(&dep_hr, &dep_meridiem);

    from_mins_to_24_hr_time(daily_flights[i].arv_time, &arv_hr, &arv_min);
    from_24_to_12_hr_time(&arv_hr, &arv_meridiem);

    printf("%d:%02d %c.m., arriving at %d:%02d %c.m.\n",
           dep_hr, dep_min, dep_meridiem,
           arv_hr, arv_min, arv_meridiem);

    return 0;
}

/* ---------------- FUNCTIONS ---------------- */

int from_24_hr_time_to_mins(int hours, int minutes)
{
    return hours * 60 + minutes;
}

int from_12_hr_time_to_mins(int hours, int minutes, char meridiem)
{
    if (hours == 12 && meridiem == 'a')
        hours = 0;
    else if (hours < 12 && meridiem == 'p')
        hours += 12;

    return from_24_hr_time_to_mins(hours, minutes);
}

void from_mins_to_24_hr_time(int total_minutes, int *hours, int *minutes)
{
    *hours = total_minutes / 60;
    *minutes = total_minutes % 60;
}

void from_24_to_12_hr_time(int *hours, char *meridiem)
{
    if (*hours == 0)
    {
        *hours = 12;
        *meridiem = 'a';
    }
    else if (*hours >= 12)
    {
        if (*hours > 12)
            *hours -= 12;

        *meridiem = 'p';
    }
    else
        *meridiem = 'a';
}