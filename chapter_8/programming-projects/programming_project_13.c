/*
13.
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array of characters
until it can be printed. You may assume that the last name is no more than 20 characters long.
*/

#include <stdio.h>

int main(void) {

    int i;
    char c, initial, last[20] = {0};

    printf("Enter a first and last name: ");
    
    while ((c = getchar()) == ' ') // Skip leading spaces
        ;
    initial = c; // Store the first character of the first name as the initial

    while ((getchar() != ' ')) // Skip the rest of the first name
        ;
    for (i = 0; (c = getchar()) != '\n'; i++) // Read the last name until newline
        last[i] = c; // Store the last name in the array

    printf("You entered the name: ");

    for (i = 0; last[i] != '\0'; i++)
        putchar(last[i]);
        
    printf(", %c.\n", initial);

    return 0;
}