/*
Show the output produced by each of the following program fragments. Assume that i and
jare int variables.
(a) i = 5;
j = ++i * 3 - 2;
printf("%d %d", i, j);
(b) i = 5;
j = 3 - 2 * i++;
printf("%d %d", i, j);
(c) i = 7;
j = 3 * i-- + 2;
printf("%d %d", i, j);
(d) i = 7;
j = 3 + --i * 2;
printf("%d %d", i, j);
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);
    // Expected: 6 16

    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);
    // Expected: 6 -7
    
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    // Expected: 6 23
    
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);
    // Expected: 6 15
    
    return 0;

}