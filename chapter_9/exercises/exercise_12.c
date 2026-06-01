/*12.
Write the following function:
double inner_product(double a[], double b[], int n);
The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].
*/

#include <stdio.h>


double inner_product(double a[], double b[], int n);

int main(void)
{
    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};
    int n = sizeof(a) / sizeof(a[0]);
    double result = inner_product(a, b, n);
    printf("The inner product is: %.2f\n", result);
    return 0;
}

double inner_product(double a[], double b[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}