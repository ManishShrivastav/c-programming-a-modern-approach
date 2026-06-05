/*
6.
Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
other words, eliminate the variable i and all uses of the [] operator.) Make as few changes
as possible.

    int sum_array(const int a[], int n)
    {
        int i, sum;
        sum = 0;
        for (i = 0; i < n; i++)
            sum += a[i];
        return sum;
    }

*/

#include <stdio.h>

int sum_array(const int a[], int n)
{
    const int *p; // p is a pointer to a const int.

    int sum = 0;

    for (p = a;          // Start p at the address of the first element.
                         // Example:
                         // a[0] at address 1000
                         // a[1] at address 1004
                         // a[2] at address 1008
                         // ...
                         // Since a decays to &a[0], p = a makes p point to address 1000.

         p < a + n;      // Continue while p points to a valid element of the array.
                         // Example: if n == 5 and a starts at address 1000:
                         //
                         // a[0] -> 1000
                         // a[1] -> 1004
                         // a[2] -> 1008
                         // a[3] -> 1012
                         // a[4] -> 1016
                         //
                         // a + 5 points to address 1020,
                         // which is ONE PAST the last element.
                         // We stop when p reaches 1020.

         p++)            // Move p to the next element.
                         // Pointer arithmetic advances by sizeof(*p) bytes.
                         // Since *p is an int (4 bytes on many systems):
                         // 1000 -> 1004 -> 1008 -> 1012 -> 1016
    {
        sum += *p;       // Dereference p to access the value stored
                         // at the address p currently points to.
                         // If p == 1008, *p is the value of a[2].
    }

    return sum;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sum_array(arr, n);
    printf("The sum of the array is: %d\n", result);
    return 0;
}
