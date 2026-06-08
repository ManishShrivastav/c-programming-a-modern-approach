/*
14.
What does the following program print?

    #include <stdio.h>
    int main(void)
    {
    char s[] = "Hsjodi", *p;
    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
    }
=================>
        The loop:
            for (p = s; *p; p++)
                --*p;

        does two things:
            p starts at the beginning of the string and moves one character at a time.
            --*p decrements the character that p points to.

            So each character is reduced by 1 in the ASCII table:
            'H' (72) becomes 'G' (71)
            's' (115) becomes 'r' (114)
            'j' (106) becomes 'i' (105)
            'o' (111) becomes 'n' (110)
            'd' (100) becomes 'c' (99)
            'i' (105) becomes 'h' (104)
        Therefore, the output of the program will be:
        Grinch with a newline at the end because of puts(s);

*/

#include <stdio.h>
int main(void)
{
    char s[] = "Hsjodi", *p;
    for (p = s;
         *p;    // Continue looping as long as the character pointed to by p is nonzero which means until we reach the null terminator of the string '\0'.
         p++)
        --*p;
    puts(s);
    return 0;
}