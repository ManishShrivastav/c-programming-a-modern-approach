/*
2.
(a) Declare structure variables named c1, c2, and c3, each having members real and
imaginary of type double.*/

struct Complex {
    double real;
    double imaginary;
};

struct Complex c1, c2, c3;

/*
(b) Modify the declaration in part (a) so that c1’s members initially have the values 0.0 and
1.0, while c2’s members are 1.0 and 0.0 initially. (c3 is not initialized.)
*/

struct Complex
{
    double real;
    double imaginary;
} c1 = {.real = 0.0, .imaginary = 1.0}, c2 = {.real = 1.0, .imaginary = 0.0}, c3;


/*
(c) Write statements that copy the members of c2 into c1. Can this be done in one statement, or does it require two?

    This can be done in one statement, as shown below.
    c1 = c2;

    This is because in C, structure variables of the same structure type can be assigned directly. The assignment performs a member-wise copy of all fields.
*/


/*
(d) Write statements that add the corresponding members of c1 and c2, storing the result
in c3.

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
*/

