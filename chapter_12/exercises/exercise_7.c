/*
7.
Write the following function:

bool search(const int a[], int n, int key);

a is an array to be searched, n is the number of elements in the array, and key is the search
key. search should return true if key matches some element of a, and false if it
doesn’t. Use pointer arithmetic—not subscripting—to visit array elements.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int a[], int n, int key)
{
    for (const int *ptr = a; ptr < a + n; ptr++)
    {
        if (*ptr == key)
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search for: ");
    scanf("%d", &key);

    if (search(arr, n, key))
    {
        printf("Key %d found in the array.\n", key);
    }
    else
    {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}