/*
16.
Write a loop that prints the highest temperature in the temperatures array (see Exercise
14) for each day of the week. The loop body should call the find_largest function,
passing it one row of the array at a time.
*/

#include <stdio.h>

int find_largest(int a[], int n)
{
    int *p = a;          // points to first element
    int *end = a + n;    // one past last element
    int max = *p;        // initial value

    for (p = a + 1; p < end; p++)
        if (*p > max)
            max = *p;

    return max;
}

int temperatures[7][24] = {
        {30, 31, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8},
        {31, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10},
        {29, 30, 31, 32, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14},
        {28},
        {27},
        {26},
        {25}
    };

int main(void)
{
    int temperatures[7][24] = {
        {30, 31, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8},
        {31, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10},
        {29, 30, 31, 32, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14},
        {28},
        {27},
        {26},
        {25}
    };


    for (int i = 0; i < sizeof(temperatures) / sizeof(temperatures[0]); i++)
    {
        int largest = find_largest(temperatures[i], sizeof(temperatures[i]) / sizeof(temperatures[i][0]));
        printf("Highest temperature for day %d: %d\n", i + 1, largest);
    }
    return 0;
}