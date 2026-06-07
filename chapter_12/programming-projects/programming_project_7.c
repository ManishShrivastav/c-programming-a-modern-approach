/*
7.
Modify the maxmin.c program of Section 11.4 so that the max_min function uses a
pointer instead of an integer to keep track of the current position in the array.

*/

#include <stdio.h>

#define N 10

void max_min(int a[], int *max, int *min);

int main(void) {

    int a[N], i, max, min;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    max_min(a, &max, &min);

    printf("Maximum is %d\n", max);
    printf("Minimum is %d\n", min);

    return 0;
}

void max_min(int a[], int *max, int *min) {

    int *p;

    *max = *min = a[0];
    for (p = a + 1; p < a + N; p++) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}