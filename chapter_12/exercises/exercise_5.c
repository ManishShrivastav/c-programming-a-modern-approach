/*
5.
Suppose that a is a one-dimensional array and p is a pointer variable. Assuming that the
assignment p = a has just been performed, which of the following expressions are illegal
because of mismatched types? Of the remaining expressions, which are true (have a nonzero
value)?
(a) p == a[0]           ---> Illegal, because p is a pointer and a[0] is an element of the array (not a pointer).
(b) p == &a[0]          ---> Legal, both are pointers to the first element of the array.
(c) *p == a[0]          ---> Legal, both are the value of the first element of the array.
(d) p[0] == a[0]        ---> Legal, both are the value of the first element of the array.
*/

#include <stdio.h>

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int *p = a; // p points to the first element of the array

    // (a) Illegal
    // printf("%d\n", p == a[0]); // This will cause a compilation error

    // (b) Legal
    printf("%d\n", p == &a[0]); // This will print 1 (true)

    // (c) Legal
    printf("%d\n", *p == a[0]); // This will print 1 (true)

    // (d) Legal
    printf("%d\n", p[0] == a[0]); // This will print 1 (true)

    return 0;
}