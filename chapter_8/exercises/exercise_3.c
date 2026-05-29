/*
3.
Write a declaration of an array named weekend containing seven bool values. Include an
initializer that makes the first and last values true; all other values should be false.
*/

#include <stdio.h>

int main(void)
{
    int weekend[7] = {1, 0, 0, 0, 0, 0, 1};

    for (int i = 0; i < sizeof(weekend) / sizeof(weekend[0]); i++)
    {
        printf("%s ", weekend[i] ? "true": "false");
    }

    return 0;    
}