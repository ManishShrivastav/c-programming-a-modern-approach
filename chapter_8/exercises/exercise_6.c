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

// test script
#include <stdio.h>
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if(segments[n][0])
		printf(" __");

	printf("\n");

	if(segments[n][5])
		printf("|");
	else
		printf(" ");

	if(segments[n][6])
		printf("__");
	else
		printf("  ");

	if(segments[n][1])
		printf("|");

	printf("\n");

	if(segments[n][4])
		printf("|");
	else
		printf(" ");

	if(segments[n][3])
		printf("__");
	else
		printf("  ");

	if(segments[n][2])
		printf("|");
	return 0;
}
