/*
4.
4.(C99) Repeat Exercise 3, but this time use a designated initializer. Make the initializer as
short as possible.
*/

#include <stdio.h>

int main(void)
{
    int weekend[7] = {[0] = 1, [6] = 1};

    for (int i = 0; i < sizeof(weekend) / sizeof(weekend[0]); i++)
    {
        printf("%s ", weekend[i] ? "true": "false");
    }

    return 0;    
}