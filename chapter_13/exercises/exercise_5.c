/*
5.
(a) Write a function named capitalize that capitalizes all letters in its argument. The
argument will be a null-terminated string containing arbitrary characters, not just letters.
Use array subscripting to access the characters in the string. Hint: Use the toupper func-
tion to convert each character to upper-case.

(b) Rewrite the capitalize function, this time using pointer arithmetic to access the
characters in the string.
*/

#include <stdio.h>
#include <ctype.h>

void capitalize_array(char str[]);
void capitalize_pointer(char *str);

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";

    capitalize_array(str1);
    printf("Capitalized (array): %s\n", str1);

    capitalize_pointer(str2);
    printf("Capitalized (pointer): %s\n", str2);

    return 0;
}

void capitalize_array(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 97 && str[i] <= 122) // Check if the character is a lowercase letter
        {
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32 from the ASCII value
        }
    }
}

void capitalize_pointer(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 97 && *str <= 122) // Check if the character is a lowercase letter
        {
            *str = *str - 32; // Convert to uppercase by subtracting 32 from the ASCII value
        }
        str++;
    }
}