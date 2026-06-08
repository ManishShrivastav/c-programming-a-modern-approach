/*
9.
What will be the value of the string s1 after the following statements have been executed?
    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';

    ======>
        Step by step:

                s1 = "computer"
                s2 = "science"

                strcmp(s1, s2) < 0

                Comparing "computer" and "science":

                First characters: 'c' vs 's'
                Since 'c' < 's', the condition is true.

                Therefore:

                strcat(s1, s2);

                s1 becomes:
                "computerscience"

                strlen(s1) is 15.

                strlen(s1) - 6 = 9

                So:

                s1[9] = '\0';

                Indexing "computerscience":

                c o m p u t e r s c i e n c e
                0 1 2 3 4 5 6 7 8 9 ...

                Character at index 9 is 'c'.

                Replacing it with '\0' truncates the string after index 8.

                Result:
                    "computers"

                Final value of s1:
                    computers

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20];
    char s2[20];

    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';

    printf("%s\n", s1);

    return 0;
}