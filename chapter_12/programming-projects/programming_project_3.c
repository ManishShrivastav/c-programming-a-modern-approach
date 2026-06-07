/*
3.
Simplify Programming Project 1(b) by taking advantage of the fact that an array name can
be used as a pointer.
*/

#include <stdio.h>
#define LEN 100

int main(void)
{
    char input, message[LEN];
    char *ptr = message;

    // Read the message one character at a time
    printf("Enter a message: ");
    while ((input = getchar()) != '\n' && (ptr - message) < LEN - 1)
    {
        *ptr++ = input;
    }
    *ptr = '\0'; // Null-terminate the string

    // reverse the message
    printf("Reversal is: ");
    while (ptr > message)
        putchar(*--ptr);
    putchar('\n');

    return 0;
}