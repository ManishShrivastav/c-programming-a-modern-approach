/*
7.
Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
column sums:
    Enter row 1: 8 3 9 0 10
    Enter row 2: 3 5 17 1 1
    Enter row 3: 2 8 6 23 1
    Enter row 4: 15 7 3 2 9
    Enter row 5: 6 14 2 6 0
    Row totals: 30 27 40 36 28
    Column totals: 34 37 37 32 21
*/

#include <stdio.h>

int main(void)
{
    int array[5][5];
    int row_totals[5] = {0}, column_totals[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            row_totals[i] += array[i][j];
            column_totals[j] += array[i][j];
        }
    }
    
    printf("Row totals:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", row_totals[i]);
    }
    printf("\n");

    printf("Column totals:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", column_totals[i]);
    }
    
    printf("\n");
    
    return 0;
}