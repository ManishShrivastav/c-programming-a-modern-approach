/*
11.
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
    Enter phone number: 1-800-COL-LECT
    In numeric form: 1-800-265-5328
The program will need to store the phone number (either in its original form or in its
numeric form) in an array of characters until it can be printed. You may assume that the
phone number is no more than 15 characters long.
*/

#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 15

int main(void)
{
	char ch, phone_numeric_form[MAX_LEN];
	int i, len;

	printf("Enter phone number: ");

	for (i = 0; i < MAX_LEN; i++)
	{
		ch = getchar();

		if (ch == '\n')
			break;

		switch (toupper(ch))
		{
		case 'A': case 'B': case 'C': phone_numeric_form[i] = '2'; break;
		case 'D': case 'E': case 'F': phone_numeric_form[i] = '3'; break;
		case 'G': case 'H': case 'I': phone_numeric_form[i] = '4'; break;
		case 'J': case 'K': case 'L': phone_numeric_form[i] = '5'; break;
		case 'M': case 'N': case 'O': phone_numeric_form[i] = '6'; break;
		case 'P': case 'R': case 'S': phone_numeric_form[i] = '7'; break;
		case 'T': case 'U': case 'V': phone_numeric_form[i] = '8'; break;
		case 'W': case 'X': case 'Y': phone_numeric_form[i] = '9'; break;
		default: phone_numeric_form[i] = ch; break;
		}
	}

	len = i;

	printf("In numeric form: ");
	for (i = 0; i < len; i++)
		putchar(phone_numeric_form[i]);

	putchar('\n');

	return 0;
}