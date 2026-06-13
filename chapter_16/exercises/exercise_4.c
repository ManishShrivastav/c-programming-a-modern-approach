/*
4.Repeat Exercise 3, but this time using a type named Complex.
*/

// a) 

typedef struct
{
    double real, imaginary;
} Complex;


// b)

Complex c1, c2, c3;

// c)

Complex make_complex(double real, double imaginary)
{
    Complex c;

    c.real = real;
    c.imaginary = imaginary;

    return c;

    // return (Complex) {.real = real, .imaginary = imaginary}; // Only C99
}

// d)

Complex add_complex(Complex c1, Complex c2)
{
    Complex c3;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;

    // return (Complex) {.real = c1.real + c2.real, .imaginary = c1.imaginary + c2.imaginary}; // Only C99
}