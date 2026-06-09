/*
16.
Modify Programming Project 1 from Chapter 12 so that it includes the following function:

void reverse(char *message);

The function reverses the string pointed to by message. Hint: Use two pointers, one ini-
tially pointing to the first character of the string and the other initially pointing to the last
character. Have the function reverse these characters and then move the pointers toward
each other, repeating the process until the pointers meet.
*/

#include <stdio.h>
#include <string.h>

void reverse(char *message);

int main(void)
{
    char message[100];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Remove the newline character if present
    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n') {
        message[len - 1] = '\0';
    }

    reverse(message);
    printf("Reversed message: %s\n", message);

    return 0;
}

void reverse(char *message)
{
    char *start = message;
    char *end = message + strlen(message) - 1;

    while (start < end) {
        // Swap the characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}