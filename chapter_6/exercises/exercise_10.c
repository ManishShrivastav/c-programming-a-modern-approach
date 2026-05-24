/*
10.Show how to replace a continue statement by an equivalent goto statement.

=====>

    A continue statement skips the remaining statements in the loop body and immediately starts the next iteration of the loop.

    This behavior can be reproduced using goto by jumping to a label placed at the end of the loop body.

    Example using continue:

    #include <stdio.h>

    int main(void)
    {
        int i = 0;

        while (i < 10)
        {
            if (i % 2 == 0)
            {
                i++;
                continue;
            }

            printf("%d ", i);
            i++;
        }

        return 0;
    }

    Equivalent version using goto:

    #include <stdio.h>

    int main(void)
    {
        int i = 0;

        while (i < 10)
        {
            if (i % 2 == 0)
            {
                i++;
                goto next_iteration;
            }

            printf("%d ", i);
            i++;

    next_iteration:
            ;
        }

        return 0;
    }

    Explanation:

    continue skips the remaining part of the loop body and starts the next iteration.
    goto next_iteration; jumps to the label at the end of the loop body, producing the same effect.
    In both programs, the output is:
    1 3 5 7 9
*/

// #include <stdio.h>

// int main(void)
// {
//     int i = 0;

//     while (i < 10)
//     {
//         if (i % 2 == 0)
//         {
//             i++;
//             continue;
//         }

//         printf("%d ", i);
//         i++;
//     }

//     return 0;
// }

// OR implement goto

#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 10)
    {
        if (i % 2 == 0)
        {
            i++;
            goto next_iteration;
        }

        printf("%d ", i);
        i++;

        next_iteration:
        ;
    }

    return 0;
}