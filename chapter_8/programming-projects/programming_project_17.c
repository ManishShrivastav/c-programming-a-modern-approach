/*
17.
Write a program that prints an n × n magic square (a square arrangement of the numbers
1, 2, ..., n2 in which the sums of the rows, columns, and diagonals are all the same). The
user will specify the value of n:

This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
 17  24   1   8  15
 23   5   7  14  16
  4   6  13  20  22
 10  12  19  21   3
 11  18  25   2   9

Store the magic square in a two-dimensional array. Start by placing the number 1 in the mid-
dle of row 0. Place each of the remaining numbers 2, 3, ..., n2 by moving up one row and
over one column. Any attempt to go outside the bounds of the array should “wrap around”
to the opposite side of the array. For example, instead of storing the next number in row –1,
we would store it in row n – 1 (the last row). Instead of storing the next number in column n,
we would store it in column 0. If a particular array element is already occupied, put the
number directly below the previously stored number. If your compiler supports variable-
length arrays, declare the array to have n rows and n columns. If not, declare the array to
have 99 rows and 99 columns.
*/

#include <stdio.h>

int main(void)
{
    int n; // Size of the magic square
    int magic_square[99][99] = {0}; // Initialize all elements to 0

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if (n < 1 || n > 99 || n % 2 == 0) {
        printf("Invalid input. Please enter an odd number between 1 and 99.\n");
        return 1;
    }

    int num = 1;            // Start with the number 1
    int row = 0;            // Start in the middle of the first row
    int col = n / 2;        // Start in the middle of the first row

    while (num <= n * n) {
        magic_square[row][col] = num++;         // Place the current number and increment
        int next_row = (row - 1 + n) % n;       // Calculate the next row (wrap around)
        int next_col = (col + 1) % n;           // Calculate the next column (wrap around)

        if (magic_square[next_row][next_col] != 0) {
            row = (row + 1) % n;
        } else {
            row = next_row;
            col = next_col;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}