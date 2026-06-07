/*
4.
Simplify Programming Project 2(b) by taking advantage of the fact that an array name can
be used as a pointer.

*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LEN 100

int main(void)
{
    char input, message[LEN];
    char *ptr = message;

    // Read the message one character at a time
    printf("Enter a message: ");
    while ((input = getchar()) != '\n' && (ptr - message) < LEN - 1)
    {
        if (isalpha(input)) // Only consider letters
        {
            *ptr++ = tolower(input); // Convert to lowercase for case-insensitivity
        }
    }
    *ptr = '\0'; // Null-terminate the string

    // Check if the message is a palindrome
    bool is_palindrome = true; // Assume it's a palindrome until proven otherwise
    char *start = message;
    char *end = ptr - 1; // Point to the last character

    while (start < end)
    {
        if (*start != *end)
        {
            is_palindrome = false; // Not a palindrome
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}