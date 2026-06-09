/*
10.
Modify Programming Project 11 from Chapter 7 so that it includes the following function:

void reverse_name(char *name);

The function expects name to point to a string containing a first name followed by a last
name. It modifies the string so that the last name comes first, followed by a comma, a space,
the first initial, and a period. The original string may contain extra spaces before the first
name, between the first and last names, and after the last name.

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverse_name(char *name);

int main(void)
{
    char name[100];

    printf("Enter a first and last name: ");
    fgets(name, sizeof(name), stdin);

    /* Remove trailing newline character if present */
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    char first_initial;
    char last_name[100];
    int i = 0, j = 0;

    /* Skip leading spaces */
    while (isspace(name[i])) 
    {
        i++;
    }

    /* First character is the first initial */
    first_initial = name[i];

    /* Read until first space (end of first name) */
    while (name[i] != ' ' && name[i] != '\0') 
    {
        i++;
    }

    /* Skip spaces between names */
    while (isspace(name[i])) 
    {
        i++;
    }

    /* Copy last name */
    while (name[i] != '\0') 
    {
        if (!isspace(name[i])) {
            last_name[j++] = name[i];
        }
        i++;
    }
    last_name[j] = '\0';

    printf("%s, %c.\n", last_name, first_initial);
}