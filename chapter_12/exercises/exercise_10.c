/*
10.
10.Modify the find_middle function of Section 11.5 so that it uses pointer arithmetic to
calculate the return value.

int *find_middle(int a[], int n) {
    return &a[n/2];
}

*/

#include <stdio.h>

int *find_middle(int a[], int n) 
{
    return a + n / 2; // Using pointer arithmetic to calculate the return value
}

int main(void) 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int *middle = find_middle(arr, n);

    printf("The middle element is: %d\n", *middle);
    
    return 0;
}