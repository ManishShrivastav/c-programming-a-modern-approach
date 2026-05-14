/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
If the row, column, and diagonal sums are all the same (as they are in this example), the
numbers are said to form a magic square. The magic square shown here appears in a 1514
engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
last row give the date of the engraving.)
*/

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, 
        &i11, &i12, &i13, &i14, &i15, &i16);
    printf("\n");
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n", i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16);
    
    int row1_sum = i1 + i2 + i3 + i4;
    int row2_sum = i5 + i6 + i7 + i8;
    int row3_sum = i9 + i10 + i11 + i12;
    int row4_sum = i13 + i14 + i15 + i16;
    printf("Row sums: %d, %d, %d, %d\n", row1_sum, row2_sum, row3_sum, row4_sum);

    int col1_sum = i1 + i5 + i9 + i13;
    int col2_sum = i2 + i6 + i10 + i14;
    int col3_sum = i3 + i7 + i11 + i15;
    int col4_sum = i4 + i8 + i12 + i16;
    printf("Column sums: %d, %d, %d, %d\n", col1_sum, col2_sum, col3_sum, col4_sum);

    int diag1_sum = i1 + i6 + i11 + i16;
    int diag2_sum = i4 + i7 + i10 + i13;
    printf("Diagonal sums: %d, %d\n", diag1_sum, diag2_sum);
    return 0;

}