/*
17.

Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
other words, eliminate the variables i and j and all uses of the [] operator.) Use a single
loop instead of nested loops.
    int sum_two_dimensional_array(const int a[][LEN], int n)
    {
        int i, j, sum = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < LEN; j++)
                sum += a[i][j];
        return sum;
    }
*/

#include <stdio.h>

#define LEN 5

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum = 0;
    const int *ptr = &a[0][0]; // Pointer to the first element of the array
    for (int i = 0; i < n * LEN; i++)
    {
        sum += *ptr; // Dereference the pointer to get the value
        ptr++; // Move the pointer to the next element
    }
    return sum;
}

int main(void)
{
    int array[3][LEN] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    
    int result = sum_two_dimensional_array(array, 3);
    printf("The sum of the two-dimensional array is: %d\n", result);
    
    return 0;
}