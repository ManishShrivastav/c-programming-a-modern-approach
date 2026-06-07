/*
2.
(a) Write a program that reads a message, then checks whether it’s a palindrome (the letters
in the message are the same from left to right as from right to left):

Enter a message: He lived as a devil, eh?
Palindrome

Enter a message: Madam, I am Adam.
Not a palindrome

Ignore all characters that aren’t letters. Use integer variables to keep track of positions in the
array.
(b) Revise the program to use pointers instead of integers to keep track of positions in the
array.
*/

#include <stdio.h>
#include <ctype.h>
#define LEN 100

// a) without pointers

// int main(void)
// {
//     char input, message[LEN];
//     int i, msg_len = 0;

//     // Read the message one character at a time
//     printf("Enter a message: ");
//     while ((input = getchar()) != '\n' && msg_len < LEN - 1)
//     {
//         if (isalpha(input)) // Only consider letters
//         {
//             message[msg_len++] = tolower(input); // Convert to lowercase for case-insensitivity
//         }
//     }
//     message[msg_len] = '\0'; // Null-terminate the string

//     // Check if the message is a palindrome
//     int is_palindrome = 1; // Assume it's a palindrome until proven otherwise
//     for (i = 0; i < msg_len / 2; i++)
//     {
//         if (message[i] != message[msg_len - 1 - i])
//         {
//             is_palindrome = 0; // Not a palindrome
//             break;
//         }
//     }

//     if (is_palindrome)
//     {
//         printf("Palindrome\n");
//     }
//     else
//     {
//         printf("Not a palindrome\n");
//     }

//     return 0;
// }

//======================================================================================================
// b) with pointers

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
    char *start = message;
    char *end = ptr - 1; // Point to the last character

    int is_palindrome = 1; // Assume it's a palindrome until proven otherwise
    while (start < end)
    {
        if (*start != *end)
        {
            is_palindrome = 0; // Not a palindrome
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