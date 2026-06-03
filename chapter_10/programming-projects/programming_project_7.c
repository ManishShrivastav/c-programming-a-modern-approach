/*
7.

Write a program that prompts the user for a number and then displays the number, using
characters to simulate the effect of a seven-segment display:
Enter a number: 491-9014


Characters other than digits should be ignored. Write the program so that the maximum
number of digits is controlled by a macro named MAX_DIGITS, which has the value 10. If
the number contains more than this number of digits, the extra digits are ignored. Hints: Use
two external arrays. One is the segments array (see Exercise 6 in Chapter 8), which stores
data representing the correspondence between digits and segments. The other array, dig-
its, will be an array of characters with 4 rows (since each segmented digit is four charac-
ters high) and MAX_DIGITS * 4 columns (digits are three characters wide, but a space is
needed between digits for readability). Write your program as four functions: main,
clear_digits_array, process_digit, and print_digits_array. Here are
the prototypes for the latter three functions:

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

clear_digits_array will store blank characters into all elements of the digits
array. process_digit will store the seven-segment representation of digit into a
specified position in the digits array (positions range from 0 to MAX_DIGITS – 1).
print_digits_array will display the rows of the digits array, each on a single line,
producing output such as that shown in the example.
*/


#include <stdio.h>

#define MAX_DIGITS 10

// External variables
const int segments[10][7] =
{
		{1, 1, 1, 1, 1, 1, 0}, // 0
		{0, 1, 1, 0, 0, 0, 0}, // 1
		{1, 1, 0, 1, 1, 0, 1}, // 2
		{1, 1, 1, 1, 0, 0, 1}, // 3
		{0, 1, 1, 0, 0, 1, 1}, // 4
		{1, 0, 1, 1, 0, 1, 1}, // 5
		{1, 0, 1, 1, 1, 1, 1}, // 6
		{1, 1, 1, 0, 0, 0, 0}, // 7
		{1, 1, 1, 1, 1, 1, 1}, // 8
		{1, 1, 1, 1, 0, 1, 1}  // 9
};

char digits[4][MAX_DIGITS * 4];

int segment_coordinates[7][2] =
{
		{0, 1}, // seg 0
		{1, 2}, // seg 1
		{2, 2}, // seg 2
		{2, 1}, // seg 3
		{2, 0}, // seg 4
		{1, 0}, // seg 5
		{1, 1}  // seg 6
};

// Prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	char num;
	int num_count = 0;

	// Initialize digits array
	clear_digits_array();

	printf("Enter a number: ");

	while(num_count < MAX_DIGITS)
	{
		num = getchar();

		if(num >= '0' && num <= '9')
		{
			process_digit(num - '0', num_count);
			num_count++;
		}
		else if(num == '\n')
			break;
	}

	// Printing digits array
	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	int i, j, digits_width = MAX_DIGITS * 4;

	for(i = 0; i < 4; i++)
		for(j = 0; j < digits_width; j++)
			digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
	int seg, row, col;
	for(seg = 0; seg <= 6; seg++)
	{
		row = segment_coordinates[seg][0];
		col = segment_coordinates[seg][1];

		if(segments[digit][seg])
			digits[row][position * 4 + col] = (seg % 3 == 0) ? '_' : '|';
	}
}

void print_digits_array(void)
{
	int row, col, digits_width = MAX_DIGITS * 4;

	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < digits_width; col++)
			printf("%c", digits[row][col]);

		printf("\n");
	}
}




