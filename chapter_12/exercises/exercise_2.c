/*
2.
Suppose that high, low, and middle are all pointer variables of the same type, and that
low and high point to elements of an array. Why is the following statement illegal, and
how could it be fixed?
middle = (low + high) / 2;


SOLUTION:
The statement is illegal because pointer arithmetic does not allow for direct sum or division of pointers. 
The expression (low + high) results in a pointer that is not meaningful, and dividing it by 2 does not yield a valid pointer.

To fix this, we can calculate the distance between low and high, divide that distance by 2, 
and then add it back to low to find the middle pointer. The corrected statement would be:
middle = low + (high - low) / 2;
*/

#include <stdio.h>

int main(void) {
    int arr[] = {4, 5, 6, 7, 8, 9};
    int *low = &arr[0];
    int *high = &arr[5];
    int *lower_middle;
    int *upper_middle;

    lower_middle = low + (high - low) / 2; // Here we are using address arithmetic to find the middle pointer. address of low + half the distance between low and high gives us the middle pointer.
    upper_middle = low + (high - low + 1) / 2; // Here we are using address arithmetic to find the upper middle pointer.

    printf("Lower middle index: %ld\n", lower_middle - arr); // Print the index of the lower middle element
    printf("Upper middle index: %ld\n", upper_middle - arr); // Print the index of the upper middle element
    printf("Low points to: %d\n", *low);
    printf("High points to: %d\n", *high);
    printf("Lower middle points to: %d\n", *lower_middle);
    printf("Upper middle points to: %d\n", *upper_middle);
    return 0;
}