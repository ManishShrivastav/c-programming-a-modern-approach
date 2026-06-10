/*
9.
Write the following parameterized macros.

(a) CHECK(x,y,n) – Has the value 1 if both x and y fall between 0 and n – 1, inclusive.
(b) MEDIAN(x,y,z) – Finds the median of x, y, and z.
(c) POLYNOMIAL(x) – Computes the polynomial 3x5 + 2x4 – 5x3 – x2 + 7x – 6.

*/

// a)

#include <stdio.h>

#define CHECK(x,y,n) ((x) >= 0 && (x) <= (n) - 1 && (y) >= 0 && (y) <= (n) - 1)

// b)
#define MEDIAN(x,y,z) \
    (((x) <= (y) && (y) <= (z)) || ((z) <= (y) && (y) <= (x)) ? (y) : \
     ((y) <= (x) && (x) <= (z)) || ((z) <= (x) && (x) <= (y)) ? (x) : \
     (z))
// c)
#define POLYNOMIAL(x) (3 * (x) * (x) * (x) * (x) * (x) +    \
                        2 * (x) * (x) * (x) * (x) -         \
                        5 * (x) * (x) * (x) - (x) * (x) +   \
                        7 * (x) - 6)                        \

int main(void)
{
    int x = 5, y = 3, z = 4, n = 10;

    // Test CHECK macro
    if (CHECK(x, y, n)) {
        printf("Both x and y are between 0 and %d - 1\n", n);
    } else {
        printf("Either x or y is out of range\n");
    }

    // Test MEDIAN macro
    printf("The median of %d, %d, and %d is %d\n", x, y, z, MEDIAN(x, y, z));

    // Test POLYNOMIAL macro
    printf("The value of the polynomial for x = %d is %.2f\n", x, POLYNOMIAL(x));

    return 0;
}