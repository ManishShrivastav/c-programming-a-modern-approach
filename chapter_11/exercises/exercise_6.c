/*
6.
Write the following function:

void find_two_largest(int a[], int n, int *largest, int *second_largest);

When passed an array a of length n, the function will search a for its largest and second-
largest elements, storing them in the variables pointed to by largest and
second_largest, respectively.
*/

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}

int main(void)
{
    int a[] = {3, 5, 2, 8, 1};
    int largest, second_largest;

    find_two_largest(a, 5, &largest, &second_largest);

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);

    return 0;
}