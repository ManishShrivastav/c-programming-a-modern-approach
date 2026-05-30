/*
14.
Write a program that reverses the words in a sentence:

Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at a period, question mark, or exclamation point (the “termi-
nating character”), which is saved in a separate char variable. Then use a second loop to
search backward through the array for the beginning of the last word. Print the last word,
then search backward for the next-to-last word. Repeat until the beginning of the array is
reached. Finally, print the terminating character.
*/

#include <stdio.h>
#define MAX_LEN 100

int main(void)
{
	char sentence[MAX_LEN], input_ch;
	int len = 0, word_start, word_end;

	printf("Enter a sentence: ");
	while ((input_ch = getchar()) != '\n')
	{
		if (input_ch == '.' || input_ch == '?' || input_ch == '!')
			break;
		else
			sentence[len++] = input_ch;
	}

	printf("Reversal of sentence: ");
	for (word_start = len - 1; word_start > 0;)
	{
		while (sentence[word_start - 1] != ' ' && word_start > 0)
			word_start--;

		for (word_end = word_start; word_end < len && sentence[word_end] != ' '; word_end++)
			putchar(sentence[word_end]);

		while (sentence[word_start - 1] == ' ' && word_start > 0)
		{
			putchar(' ');
			word_start--;
		}
	}

	putchar(input_ch); // Print the terminating character
	putchar('\n');

	return 0;
}
