/*
4.
Modify the read_line function in each of the following ways:
(a) Have it skip white space before beginning to store input characters.
(b) Have it stop reading at the first white-space character. Hint: To determine whether or
    not a character is white space, call the isspace function.
(c) Have it stop reading at the first new-line character, then store the new-line character in
    the string.
(d) Have it leave behind characters that it doesn’t have room to store.
*/

#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n) 
{
    int ch, i = 0;

    // Skip leading white space
    while (isspace(ch = getchar()))
        ;

    // Read characters until white space or new-line is encountered
    while (ch != EOF && !isspace(ch) && i < n - 1) {
        str[i++] = ch;
        ch = getchar();
    }

    // If the last character read was a new-line, include it in the string
    if (ch == '\n' && i < n - 1) {
        str[i++] = ch;
    }

    str[i] = '\0'; // Null-terminate the string
}

int main(void)
{
    char str[100];
    printf("Enter a line of text: ");
    read_line(str, 100);
    printf("You entered: %s", str);
    return 0;
}
