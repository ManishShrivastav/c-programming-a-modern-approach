/*
4.
Write the following function:

void swap(int *p, int *q);
When passed the addresses of two variables, swap should exchange the values of the variables:

swap(&i, &j);       / exchanges values of i and j /
*/

#include <stdio.h>

void swap(int *p, int *q)
{
    int temp; // Temporary variable to hold the value during the swap
    temp = *p; // Store the value pointed to by p in temp
    *p = *q;   // Assign the value pointed to by q to the location pointed to by p
    *q = temp; // Assign the value stored in temp to the location pointed to by q
}

int main(void)
{
    int i = 5, j = 10;

    printf("Before swap: i = %d, j = %d\n", i, j); // Print values before swap

    swap(&i, &j); // Call the swap function with the addresses of i and j

    printf("After swap: i = %d, j = %d\n", i, j); // Print values after swap

    return 0;
}