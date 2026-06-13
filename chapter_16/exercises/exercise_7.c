/*
7.
Assume that the fraction structure contains two members: numerator and denomi-
nator (both of type int). Write functions that perform the following operations on frac-
tions:
(a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction to lowest terms, first
    compute the greatest common divisor (GCD) of the numerator and denominator. Then
    divide both the numerator and denominator by the GCD.
(b) Add the fractions f1 and f2.
(c) Subtract the fraction f2 from the fraction f1.
(d) Multiply the fractions f1 and f2.
(e) Divide the fraction f1 by the fraction f2.
The fractions f, f1, and f2 will be arguments of type struct fraction; each function
will return a value of type struct fraction. The fractions returned by the functions in
parts (b)–(e) should be reduced to lowest terms. Hint: You may use the function from part
(a) to help write the functions in parts (b)–(e).
*/

#include <stdio.h>

struct fraction
{
    int numerator, denominator;
};

int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// a)
struct fraction reduce(struct fraction f)
{
    int g = gcd(f.numerator, f.denominator);

    f.numerator /= g;
    f.denominator /= g;

    if (f.denominator < 0)
    {
        f.numerator = -f.numerator;
        f.denominator = -f.denominator;
    }
    
    return f;
}

// b)
struct fraction add(struct fraction f1, struct fraction f2)
{
    struct fraction result;

    result.numerator =
        f1.numerator * f2.denominator +
        f2.numerator * f1.denominator;

    result.denominator =
        f1.denominator * f2.denominator;

    return reduce(result);
}

// c)
struct fraction subtract(struct fraction f1, struct fraction f2)
{
    struct fraction result;

    result.numerator =
        f1.numerator * f2.denominator -
        f2.numerator * f1.denominator;

    result.denominator =
        f1.denominator * f2.denominator;

    return reduce(result);
}

// d)
struct fraction multiply(struct fraction f1, struct fraction f2)
{
    struct fraction result;

    result.numerator =
        f1.numerator * f2.numerator;

    result.denominator =
        f1.denominator * f2.denominator;

    return reduce(result);
}

// e)
struct fraction divide(struct fraction f1, struct fraction f2)
{
    struct fraction result;

    result.numerator =
        f1.numerator * f2.denominator;

    result.denominator =
        f1.denominator * f2.numerator;

    return reduce(result);
}

int main(void)
{
    struct fraction f1 = { 1, 2 };
    struct fraction f2 = { 3, 4 };

    struct fraction sum = add(f1, f2);
    struct fraction difference = subtract(f1, f2);
    struct fraction product = multiply(f1, f2);
    struct fraction quotient = divide(f1, f2);
    printf("Sum of %d/%d and %d/%d is %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, sum.numerator, sum.denominator);
    printf("Difference of %d/%d and %d/%d is %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, difference.numerator, difference.denominator);
    printf("Product of %d/%d and %d/%d is %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, product.numerator, product.denominator);
    printf("Quotient of %d/%d and %d/%d is %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, quotient.numerator, quotient.denominator);

    return 0;
}