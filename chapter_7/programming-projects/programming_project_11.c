/*
11.
Write a program that takes a first name and last name entered by the user and displays the
last name, a comma, and the first initial, followed by a period:
Enter a first and last name: Lloyd Fosdick
Fosdick, L.
The user’s input may contain extra spaces before the first name, between the first and last
names, and after the last name.
*/

#include <stdio.h>

int main(void)
{
    char ch;
    char first_initial;

    printf("Enter a first and last name: ");

    /* Skip leading spaces */
    while ((ch = getchar()) == ' ')
        ;

    /* First character is the first initial */
    first_initial = ch;

    /* Read until first space (end of first name) */
    while (ch != ' ')
        ch = getchar();

    /* Skip spaces between names */
    while ((ch = getchar()) == ' ')
        ;

    /* Print last name */
    printf("%c", ch);

    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            printf("%c", ch);
        else
            break;
    }

    printf(", %c.\n", first_initial);

    return 0;
}