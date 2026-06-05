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
    const int *p = a;
    const int *end = a + n;

    int max1 = *p;
    int max2 = *p;

    p++;

    while (p < end) {
        if (*p > max1) {
            max2 = max1;
            max1 = *p;
        }
        else if (*p > max2) {
            max2 = *p;
        }

        p++;
    }

    *largest = max1;
    *second_largest = max2;
}