/*
15.
Let f be the following function:

    int f(char *s, char *t)
    {
        char *p1, *p2;
        for (p1 = s; *p1; p1++) 
        {
            for (p2 = t; *p2; p2++)
            {
                if (*p1 == *p2) break;
            }
            if (*p2 == '\0') break;
        }
        return p1 - s;
    }
(a) What is the value of f("abcd", "babc")?
(b) What is the value of f("abcd", "bcd")?
(c) In general, what value does f return when passed two strings s and t?
        In general, f returns the index of the first character in s that does not appear in t. 
        If all characters in s appear in t, then f returns the length of s.
*/

#include <stdio.h>

int f(char *s, char *t)
{
    char *p1, *p2;
    for (p1 = s; *p1; p1++) 
    {
        for (p2 = t; *p2; p2++)
        {
            if (*p1 == *p2) break;
        }
        if (*p2 == '\0') break;
    }
    return p1 - s;
}

int main(void)
{
    printf("%d\n", f("abcd", "babc")); // 3
    printf("%d\n", f("abcd", "bcd"));  // 0
    return 0;
}