/*
1.
What output does the following program fragment produce?
    i = 1;
    while (i <= 128) {
    printf("%d ", i);
    i *= 2;
    }

My assessment is 1 2 4 8 16 32 64 128
*/

#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }
    
}
