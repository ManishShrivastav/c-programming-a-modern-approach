/*
8.
Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
other words, eliminate the variable i and all uses of the [] operator.) Make as few changes
as possible.

void store_zeros(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = 0;
}

*/

#include <stdio.h>

void store_zeros(int a[], int n)
{
    int *ptr;

    for ( ptr = a; ptr < a + n; ptr++)
    {
        *ptr = 0;
    }
    
}

int main(void)
{
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);

    store_zeros(arr, n);

    printf("Array after storing zeros: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}