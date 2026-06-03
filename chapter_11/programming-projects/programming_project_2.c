/*
2.
Modify Programming Project 8 from Chapter 5 so that it includes the following function:

    void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

This function will find the flight whose departure time is closest to desired_time
(expressed in minutes since midnight). It will store the departure and arrival times of this
flight (also expressed in minutes since midnight) in the variables pointed to by
departure_time and arrival_time, respectively.

*/

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hours, minutes, user_time;
    int departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    user_time = hours * 60 + minutes;

    find_closest_flight(user_time, &departure_time, &arrival_time);

    printf("Closest departure time is %d:%02d, arriving at %d:%02d.\n",
           departure_time / 60, departure_time % 60,
           arrival_time / 60, arrival_time % 60);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time < (480 + 583) / 2) {
        *departure_time = 480;
        *arrival_time = 616;
    }
    else if (desired_time < (583 + 679) / 2) {
        *departure_time = 583;
        *arrival_time = 712;
    }
    else if (desired_time < (679 + 767) / 2) {
        *departure_time = 679;
        *arrival_time = 791;
    }
    else if (desired_time < (767 + 840) / 2) {
        *departure_time = 767;
        *arrival_time = 900;
    }
    else if (desired_time < (840 + 945) / 2) {
        *departure_time = 840;
        *arrival_time = 968;
    }
    else if (desired_time < (945 + 1140) / 2) {
        *departure_time = 945;
        *arrival_time = 1075;
    }
    else if (desired_time < (1140 + 1305) / 2) {
        *departure_time = 1140;
        *arrival_time = 1280;
    }
    else {
        *departure_time = 1305;
        *arrival_time = 1438;
    }
}
