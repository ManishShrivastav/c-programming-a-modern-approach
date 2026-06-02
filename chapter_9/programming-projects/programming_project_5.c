/*
5.
Modify Programming Project 17 from Chapter 8 so that it includes the following functions:

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

After obtaining the number n from the user, main will call create_magic_square,
passing it an n × n array that is declared inside main. create_magic_square will fill
the array with the numbers 1, 2, ..., n2(=n*n) as described in the original project. main will then
call print_magic_square, which will display the array in the format described in the
original project. Note: If your compiler doesn’t support variable-length arrays, declare the
array in main to be 99 × 99 instead of n × n and use the following prototypes instead:

void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
*/

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n;
    char magic_square[99][99];

    printf("Enter the size of the magic square (odd number between 1 and 99): ");
    scanf("%d", &n);

    if (n < 1 || n > 99 || n % 2 == 0) {
        printf("Invalid input. Please enter an odd number between 1 and 99.\n");
        return 1;
    }

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int num = 1;
    int row = 0;
    int col = n / 2;

    while (num <= n * n) {
        magic_square[row][col] = num;

        if (num % n == 0) {
            row++;
        } else {
            row--;
            col++;
        }

        if (row < 0) {
            row = n - 1;
        }
        if (col >= n) {
            col = 0;
        }

        num++;
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }
}