/*
11.What output does the following program fragment produce?

        sum = 0;
        for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
        }
        printf("%d\n", sum);


========> My Assessment is 0 + 2 + 4 + 6 + 8 = 20
*/

#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            continue;
        }

        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}