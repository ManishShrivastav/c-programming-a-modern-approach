/*
8.
Write the following function:

int *find_largest(int a[], int n);

When passed an array a of length n, the function will return a pointer to the array’s largest
element.
*/

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d integers:", n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }

    int *largest = find_largest(a, n); // *largest is a pointer to the largest element in the array

    if (largest != NULL) 
    {
        printf("The largest element is: %d\n", *largest);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}

int *find_largest(int a[], int n)
{
    if (n <= 0) {
        return NULL; // Return NULL if the array is empty
    }

    int *largest = &a[0]; // Initialize largest to the first element

    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            largest = &a[i]; // Update largest if a larger element is found
        }
    }

    return largest; // Return pointer to the largest element
}