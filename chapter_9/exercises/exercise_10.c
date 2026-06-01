/*
10.
10.Write functions that return the following values. (Assume that a and n are parameters,
where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
*/

#include <stdio.h>

int largest(int a[], int n) 
{
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

double average(int a[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return (double)sum / n;
}

int count_positive(int a[], int n) 
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() 
{
    int a[] = {1, -2, 3, 4, -5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Largest element: %d\n", largest(a, n));
    printf("Average: %.2f\n", average(a, n));
    printf("Number of positive elements: %d\n", count_positive(a, n));

    return 0;
}