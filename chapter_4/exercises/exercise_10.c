/*
Show the output produced by each of the following program fragments. Assume that i and
j are int variables.
(a) i = 6;
j = i += i;
printf("%d %d", i, j);
(b) i = 5;
j = (i -= 2) + 1;
printf("%d %d", i, j);
(c) i = 7;
j = 6 + (i = 2.5);
printf("%d %d", i, j);
(d) i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d %d", i, j);
*/

#include <stdio.h>

int main(void)
{
    int i = 6;
    int j;
    j = i += i;
    printf("%d %d\n", i, j);
    // Expected: 12 12

    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);
    // Expected: 3 4
    
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);
    // Expected: 2 8
    
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);
    // Expected: 6 9
    return 0;
    
}