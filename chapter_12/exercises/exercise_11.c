/*
11.
Modify the find_largest function so that it uses pointer arithmetic—not subscript-
ing—to visit array elements.

    int find_largest(int a[], int n)
    {
        int i, max;
        max = a[0];
        for (i = 1; i < n; i++)
            if (a[i] > max)
                max = a[i];
        return max;
    }
*/

#include <stdio.h>

int find_largest(int a[], int n)
{
    int *p = a;          // points to first element
    int *end = a + n;    // one past last element
    int max = *p;        // initial value

    for (p = a + 1; p < end; p++)
        if (*p > max)
            max = *p;

    return max;
}

int main(void) 
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int largest = find_largest(arr, n);

    printf("The largest element is: %d\n", largest);
    
    return 0;
}