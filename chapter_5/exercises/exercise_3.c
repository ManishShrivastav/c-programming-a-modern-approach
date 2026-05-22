/*
The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j, and k are int variables.
(a) i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);

        i < j becomes 3 < 4, which is true (1).
        Since || uses short-circuit evaluation, the right side ++j < k is not 
        executed because the left side is already true. Therefore j is not incremented.
            FINAL OUTPUT:   1
                            3 4 5

(b) i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);

        i - 7 is 0, so the whole && expression becomes false immediately. 
        Because && short-circuits, j++ is never evaluated, so j stays 8 (not incremented).
            FINAL OUTPUT:   0
                            7 8 9
                            
(c) i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);

(d) i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 3, j =4, k =5;
    printf("%d ", i < j || ++j < k); // 1
    printf("%d %d %d\n", i, j, k); // 3 4 5

    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k); // 0
    printf("%d %d %d\n", i, j, k); // 7 9 9, I was wrong, it is actually 7 8 9

    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k)); // 1
    printf("%d %d %d\n", i, j, k); // 8 8 9

    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k); // 1
    printf("%d %d %d", i, j, k); // 2 1 1

    return 0;
}