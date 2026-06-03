/*
3.
The following function supposedly computes the sum and average of the numbers in the
array a, which has length n. avg and sum point to variables that the function should mod-
ify. Unfortunately, the function contains several errors; find and correct them.

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    sum = 0.0;                  // Error: sum is a pointer, so we need to dereference it to assign a value using *sum = 0.0
    for (i = 0; i < n; i++)
        sum += a[i];        // Error: sum is a pointer, so we need to dereference it to add a[i] to it using *sum += a[i]
    avg = sum / n;      // Error: avg is a pointer, so we need to dereference it to assign the average value using *avg = *sum / n
}
*/

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0; 
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}

int main(void)
{
    double a[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int n = sizeof(a) / sizeof(a[0]);
    double avg, sum;

    avg_sum(a, n, &avg, &sum);      // &avg and &sum are the addresses of avg and sum variables, which we pass to the function to allow it to modify their values

    printf("Sum: %.2f\n", sum);     // sum is now modified by the function, so we can print its value
    printf("Average: %.2f\n", avg); // avg is now modified by the function, so we can print its value

    return 0;
}