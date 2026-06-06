/*
1.
(a) Write a program that reads a message, then prints the reversal of the message:

Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar) and store the characters in
an array. Stop reading when the array is full or the character read is '\n'.

(b) Revise the program to use a pointer instead of an integer to keep track of the current
position in the array.
*/

#include <stdio.h>
#define LEN 100

// a)

// int main(void)
// {
//     char input, message[LEN];
//     int i, msg_len = 0;

//     // Read the message one character at a time
//     printf("Enter a message: ");
//     while ((input = getchar()) != '\n' && msg_len < LEN - 1)
//     {
//         message[msg_len++] = input;
//     }

//     // reverse the message
//     printf("Reversal is: ");
//     for (i = msg_len - 1; i >= 0; i--)
//     {
//         putchar(message[i]);
//     }
//     putchar('\n');

//     return 0;
// }


// b)
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
    for (ptr--; ptr >= message; ptr--)
    {
        putchar(*ptr);
    }
    putchar('\n');

    return 0;
}

