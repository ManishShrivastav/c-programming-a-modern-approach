/*
17.
Modify Programming Project 2 from Chapter 12 so that it includes the following function:

bool is_palindrome(const char *message);

The function returns true if the string pointed to by message is a palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(const char *message);

int main(void)
{
    char message[100];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline character if present
    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n') {
        message[len - 1] = '\0';
    }

    if (is_palindrome(message)) {
        printf("The message is a palindrome.\n");
    } else {
        printf("The message is not a palindrome.\n");
    }

    return 0;
}

bool is_palindrome(const char *message)
{
    const char *start = message;
    const char *end = message + strlen(message) - 1;

    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}
