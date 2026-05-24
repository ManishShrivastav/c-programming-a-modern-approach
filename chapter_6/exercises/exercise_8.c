/*
*8.What output does the following for statement produce?
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

=====>

    Start:
    i = 10

    The loop is:

    for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);

    Important detail:
    i++ means:

    print the current value of i first
    then increase i by 1

    Also, because i is an integer, division uses integer division.

    Step-by-step:

    Iteration 1:

    i = 10
    condition: 10 >= 1 → true
    print 10
    i becomes 11 because of i++
    update step: i /= 2 → 11 / 2 = 5

    Iteration 2:

    i = 5
    condition true
    print 5
    i becomes 6
    update: 6 / 2 = 3

    Iteration 3:

    i = 3
    print 3
    i becomes 4
    update: 4 / 2 = 2

    Iteration 4:

    i = 2
    print 2
    i becomes 3
    update: 3 / 2 = 1

    Iteration 5:

    i = 1
    print 1
    i becomes 2
    update: 2 / 2 = 1

    Now i is back to 1 again.

    So from this point:

    it prints 1
    increments to 2
    divides by 2
    becomes 1 again

    This repeats forever.

    Final output:
    10 5 3 2 1 1 1 1 1 ...
*/

#include <stdio.h>

int main(void)
{
    for (int i = 10; i >= 1; i /= 2)
    {
        printf("%d ", i++);
    }
}