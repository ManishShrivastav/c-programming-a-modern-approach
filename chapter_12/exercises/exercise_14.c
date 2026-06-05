/*
14.
Assume that the following array contains a week’s worth of hourly temperature readings,
with each row containing the readings for one day:
int temperatures[7][24];
Write a statement that uses the search function (see Exercise 7) to search the entire
temperatures array for the value 32.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int a[], int n, int key)
{
    for (const int *ptr = a; ptr < a + n; ptr++)
    {
        if (*ptr == key)
        {
            return true;
        }
    }
    return false;
}

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

    int key;
    printf("Enter the temperature value to search for: ");
    scanf("%d", &key);
    bool found = false;

    for (int i = 0; i < sizeof(temperatures) / sizeof(temperatures[0]); i++)
    {
        if (search(temperatures[i], sizeof(temperatures[i]) / sizeof(temperatures[i][0]), key))
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        printf("Value %d found in the temperatures array.\n", key);
    }
    else
    {
        printf("Value %d not found in the temperatures array.\n", key);
    }

    return EXIT_SUCCESS;
}