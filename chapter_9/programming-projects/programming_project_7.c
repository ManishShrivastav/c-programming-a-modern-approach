/*
7.
The power function of Section 9.6 can be made faster by having it calculate xn in a differ-
ent way. We first notice that if n is a power of 2, then xn can be computed by squaring. For
example, x4 is the square of x2, so x4 can be computed using only two multiplications instead
of three. As it happens, this technique can be used even when n is not a power of 2. If n is
even, we use the formula xn = (xn/2)2. If n is odd, then xn = x × xn–1. Write a recursive func-
tion that computes xn. (The recursion ends when n = 0, in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n, calls
power to compute xn, and then displays the value returned by the function.
*/

#include <stdio.h>

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n % 2 == 0) {
        double half_power = power(x, n / 2);
        return half_power * half_power;
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    double x;
    int n;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    printf("Enter a value for n: ");
    scanf("%d", &n);

    double result = power(x, n);
    printf("%.2lf raised to the power of %d is %.2lf\n", x, n, result);

    return 0;
}