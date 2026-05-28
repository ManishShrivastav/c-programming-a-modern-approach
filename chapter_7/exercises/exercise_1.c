/*
1.
Give the decimal value of each of the following integer constants.
(a) 077  --> here 0 --> octal base
(b) 0x77 ---- 0x ---> hexadecimal base
(c) 0XABC ---> 0X ---> hexadecimal base
*/

#include <stdio.h>

int main(void)
{
    int a = 077;        // octal
    int b = 0x77;       // hexadecimal
    int c = 0XABC;      // hexadecimal

    printf("Decimal value of 077 = %d\n", a);
    printf("Decimal value of 0x77 = %d\n", b);
    printf("Decimal value of 0XABC = %d\n", c);
    return 0;
}