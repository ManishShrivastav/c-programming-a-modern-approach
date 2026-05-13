/*
Modify the program of Programming Project 2 so that it prompts the user to enter the radius
of the sphere.
*/

#include <stdio.h>

#define PI 3.1415f

int main(void)
{
    float radius;
    float fraction = 4.0f/3.0f;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Volume of sphere (radius = %.2f): %.2f\n", radius, fraction * PI * radius * radius * radius);
    return 0;
}