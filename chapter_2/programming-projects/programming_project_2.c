/*
Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
mula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-
pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
twice to compute r3.
*/

#include <stdio.h>

#define PI 3.1415f

int main(void)
{
    float radius = 10.0f;
    float fraction = 4.0f/3.0f;

    printf("Volume of sphere: %.2f\n", fraction * PI * radius * radius * radius);
    return 0;
}