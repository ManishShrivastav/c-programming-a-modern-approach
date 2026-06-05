/*
3.
What will be the contents of the a array after the following statements are executed?
    #define N 10
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;
    while (p < q) {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    The contents of the a array will be reversed. After the execution of the code, the a array will contain the following values:
    a[0] = 10
    a[1] = 9
    a[2] = 8 etc...
*/

#include <stdio.h>

#define N 10

int main(void) {
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;

    while (p < q) {
        temp = *p;
        *p++ = *q; // This line assigns the value pointed to by q to the location pointed to by p, and then increments p to point to the next element in the array.
        *q-- = temp;  // This line assigns the value stored in temp to the location pointed to by q, and then decrements q to point to the previous element in the array.
    }

    for (size_t i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}