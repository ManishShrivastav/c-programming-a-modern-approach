/*
12.
Write the following function:

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

a points to an array of length n. The function searches the array for its largest and second-
largest elements, storing them in the variables pointed to by largest and
second_largest, respectively. Use pointer arithmetic—not subscripting—to visit array
elements.

*/

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {3, 5};
    int largest, second_largest;

    find_two_largest(a, 2, &largest, &second_largest);

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p;
    const int *end = a + n;

    int max1, max2;

    // 1st pass: find largest
    max1 = *a;
    for (p = a + 1; p < end; p++) {
        if (*p > max1)
            max1 = *p;
    }

    // 2nd pass: find second largest (not equal to max1)
    max2 = *a;
    for (p = a; p < end; p++) {
        if (*p != max1 && *p > max2) // only consider values not equal to max1
            max2 = *p;
    }

    *largest = max1;
    *second_largest = max2;
}