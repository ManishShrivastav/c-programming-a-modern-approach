/*
Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.
(a) i = 5; j = 3;
printf("%d %d", i / j, i % j);

(b) i = 2; j = 3;
printf("%d", (i + 10) % j);

(c) i = 7; j = 8; k = 9;
printf("%d", (i + 10) % k / j);

(d) i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2) / k);
*/
#include <stdio.h>

int main(void)
{
    // a)
    int i = 5, j = 3;

    printf("%d %d\n", i / j, i % j);
    //Expected: 1 2

    // b)
    i = 2, j = 3;
    printf("%d\n", (i + 10) % j);
    // Expected: 0

    // c)
    i = 7; j = 8;
    int k = 9;
    printf("%d\n", (i + 10) % k / j); 
    // Expected: 1 

    // d)
    i = 1, j = 2, k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);
    // Expected: 0    
    return 0;
}