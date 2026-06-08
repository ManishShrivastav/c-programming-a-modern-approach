/*
6.
Write a function named censor that modifies a string by replacing every occurrence of
foo by xxx. For example, the string "food fool" would become "xxxd xxxl". Make
the function as short as possible without sacrificing clarity.
*/

#include <stdio.h>
#include <string.h>

void censor(char str[])
{
    for (int i = 0; str[i + 2] != '\0'; i++)
    {
        if (strncmp(&str[i], "foo", 3) == 0)
        {
            str[i] = str[i + 1] = str[i + 2] = 'x';
            i += 2; // Skip the next two characters since they are already processed
        }
    }
}

int main(void)
{
    char str[] = "food fool";
    censor(str);
    printf("%s\n", str); // Output: "xxxd xxxl"
    return 0;
}