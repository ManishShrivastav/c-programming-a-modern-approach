/*
Give the values of i and j after each of the following expression statements has been exe-
cuted. (Assume that i has the value 1 initially and j has the value 2.)
(a) i += j;
(b) i--;
(c) i * j / i;
(d) i % ++j;
*/

#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;

    i += j;
    printf("%d %d\n", i, j);
    // Expected: 3 2

    i--;
    printf("%d %d\n", i, j);
    // Expected: 2 2
    
    i * j / i;
    printf("%d %d\n", i, j);
    // Expected: 2 2
    
    i % ++j;
    printf("%d %d\n", i, j);
    // Expected: 2 3
    return 0;

}