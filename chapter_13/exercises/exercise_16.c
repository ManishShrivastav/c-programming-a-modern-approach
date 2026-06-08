/*
16.
Use the techniques of Section 13.6 to condense the count_spaces function of Section
13.4. In particular, replace the for statement by a while loop.
*/

#include <stdio.h>

int count_spaces(const char *s)
{
    int count = 0;
    while (*s)
    {
        if (*s == ' ')
            count++;
        s++;
    }
    return count;
}

int main(void)
{
    const char *str = "Hello World! This is a test.";
    int spaces = count_spaces(str);
    printf("Number of spaces: %d\n", spaces); // Output: Number of spaces: 5
    return 0;
}