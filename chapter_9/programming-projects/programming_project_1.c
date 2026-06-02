/*
1.
Write a program that asks the user to enter a series of integers (which it stores in an array),
then sorts the integers by calling the function selection_sort. When given an array
with n elements, selection_sort must do the following:

1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first n – 1 elements of the array.
*/

#include <stdio.h>

void selection_sort(int a[], int n)
{
    if (n <= 1)   // Base case
        return;

    int largest_index = 0;

    // Find index of largest element
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[largest_index])
        {
            largest_index = i;
        }
    }

    // Swap largest element with last element
    int temp = a[largest_index];
    a[largest_index] = a[n - 1];
    a[n - 1] = temp;

    // Recursively sort first n-1 elements
    selection_sort(a, n - 1);
}

int main(void)
{
    int n;

    printf("How many integers? ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selection_sort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}