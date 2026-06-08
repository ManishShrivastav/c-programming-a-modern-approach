/*
3.
Suppose that we call scanf as follows:
scanf("%d%s%d", &i, s, &j);
If the user enters 12abc34 56def78, what will be the values of i, s, and j after the
call? (Assume that i and j are int variables and s is an array of characters.)

--->
    scanf processes the input as follows:

    %d reads the integer 12 and stops at the first non-digit character (a).
    i = 12
    %s then reads characters until it encounters whitespace. Starting from a, it reads abc34.
    s = "abc34"
    %d skips the space and reads the integer 56, stopping at the first non-digit character (d).
    j = 56

    The remaining characters def78 are left unread in the input buffer.

    Final values:

    i = 12
    s = "abc34"
    j = 56
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    char s[100];

    printf("Enter input: ");
    scanf("%d%s%d", &i, s, &j);

    printf("i = %d\n", i);
    printf("s = %s\n", s);
    printf("j = %d\n", j);

    return 0;
}