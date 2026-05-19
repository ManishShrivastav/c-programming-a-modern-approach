/*
Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits. Hint: See the upc.c pro-
gram of Section 4.1.

upc.c is

// Computes a Universal Product Code check digit

#include <stdio.h>
int main(void)
{
int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
first_sum, second_sum, total;
printf("Enter the first (single) digit: ");
scanf("%1d", &d);
printf("Enter first group of five digits: ");
scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
printf("Enter second group of five digits: ");
scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
first_sum = d + i2 + i4 + j1 + j3 + j5;
second_sum = i1 + i3 + i5 + j2 + j4;
total = 3 * first_sum + second_sum;
printf("Check digit: %d\n", 9 - ((total - 1) % 10));
return 0;
}
*/

#include <stdio.h>

int main(void)
{
    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}