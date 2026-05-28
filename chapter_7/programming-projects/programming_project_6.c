/*
6.
Write a program that prints the values of sizeof(int), sizeof(short),
sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
*/

// #include <stdio.h>

// int main(void) {

//     printf("%lu, %lu, %lu, %lu, %lu, %lu\n", 
//            (unsigned long) sizeof(int), (unsigned long) sizeof(short),
//            (unsigned long) sizeof(long), (unsigned long) sizeof(float),
//            (unsigned long) sizeof(double), (unsigned long) sizeof(long double));

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    printf("int: %zu\n", sizeof(int));
    printf("short: %zu\n", sizeof(short));
    printf("long: %zu\n", sizeof(long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));

    return 0;
}