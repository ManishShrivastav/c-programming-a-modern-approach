/*
What output do the following calls of printf produce?
(a) printf("%6d,%4d", 86, 1040);
(b) printf("%12.5e", 30.253);
(c) printf("%.4f", 83.162);
(d) printf("%-6.2g", .0000009979);
*/

#include <stdio.h>

int main(void)
{
    // a)
    printf("%6d, %4d", 86, 1040);
    printf("\n");
    // predicted output -> "    86, 1040"

    // b)
    printf("%12.5e", 30.253);
    printf("\n");
    // expected output -> " 3.02530e+01"

    // c)
    printf("%.4f", 83.162);
    printf("\n");
    // expected output -> "83.1620"

    // d)
    printf("%-6.2g", .0000009979);
    printf("\n");
    // expected output -> "99.79e-8      "
    return 0;
    /*
    The number:

        0.0000009979

        is approximately:

        9.979 × 10^-7

        Rounded to 2 significant digits:

        1.0 × 10^-6

        Then %g removes unnecessary trailing zeros:

        1e-06
    */
}