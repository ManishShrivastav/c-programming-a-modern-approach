/*
4.Here’s a simplified version of the Beaufort scale, which is used to estimate wind force:
        Speed (knots)                   Description
        Less than 1                     Calm
        1–3                             Light air
        4–27                            Breeze
        28–47                           Gale
        48–63                           Storm
        Above 63                        Hurricane

Write a program that asks the user to enter a wind speed (in knots), then displays the corre-
sponding description.
*/

#include <stdio.h>

int main(void)
{
    int wind_speed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &wind_speed);
    
    if (wind_speed < 1)
        printf("Calm\n");
    else if (wind_speed <= 3)
        printf("Light air\n");
    else if (wind_speed <= 27)
        printf("Breeze");
    else if (wind_speed <= 47)
        printf("Gale");
    else if (wind_speed <= 63)
        printf("Storm");
    else
        printf("Hurricane");

    return 0;
}