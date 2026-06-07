/*
5.
Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an inte-
ger to keep track of the current position in the array that contains the sentence.
*/

#include <stdio.h>
#define MAX_LEN 100

int main(void)
{
    char sentence[MAX_LEN], input_ch, *ptr = sentence;

    printf("Enter a sentence: ");
    while ((input_ch = getchar()) != '\n')
    {
        if (input_ch == '.' || input_ch == '?' || input_ch == '!')
            break;
        else
            *ptr++ = input_ch; // Store the character and move the pointer
    }

    printf("Reversal of sentence: ");
    while (ptr > sentence)
    {
        char *word_end = ptr - 1;

        while (word_end > sentence && *word_end == ' ')
            word_end--;

        char *word_start = word_end;

        while (word_start > sentence && *(word_start - 1) != ' ')
            word_start--;

        for (char *p = word_start; p <= word_end; p++)
            putchar(*p);

        if (word_start > sentence)
            putchar(' ');

        ptr = word_start - 1;
    }

    return 0;
}