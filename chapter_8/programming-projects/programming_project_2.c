/*
2.
Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
many times each digit appears in the number:

Enter a number: 41271092
Digit:          0   1   2   3   4   5   6   7   8   9
Occurrences:    1   2   2   0   1   0   0   1   0   1

*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int repeated_digits_count[10] = {false};
    long n;
    int digits;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digits = n % 10;
        repeated_digits_count[digits]++;
        n /= 10;
    }

    printf ("Digit:\t\t");
    for (digits = 0; digits <= 9; digits++)
        printf("%3d", digits);
    printf("\nOccurrences:\t");
    for (digits = 0; digits <= 9; digits++)
        printf("%3d", repeated_digits_count[digits]);
    printf("\n");

    return 0;    
}