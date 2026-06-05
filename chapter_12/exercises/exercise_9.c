/*
9.
Write the following function:

double inner_product(const double *a, const double *b, int n);

a and b both point to arrays of length n. The function should return a[0] * b[0] +
a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic—not subscripting—to
visit array elements.

*/

#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
    // const double *pa, *pb;
    double product = 0.0;

    // for ( pa = a, pb = b; pa < a + n; pa++, pb++)
    // {
    //     product += (*pa) * (*pb);       
    // }

    // return product;

    while (n-- > 0)
    {
        product += (*a++) * (*b++);
    }
    
    return product;
}

int main(void)
{
    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};
    int n = sizeof(a) / sizeof(a[0]);

    double result = inner_product(a, b, n);
    printf("Inner product: %f\n", result);

    return 0;
}