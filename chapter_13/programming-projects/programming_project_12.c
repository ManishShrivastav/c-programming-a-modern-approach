/*
12.
Modify Programming Project 14 from Chapter 8 so that it stores the words in a two-
dimensional char array as it reads the sentence, with each row of the array storing a sin-
gle word. Assume that the sentence contains no more than 30 words and no word is more
than 20 characters long. Be sure to store a null character at the end of each word so that it
can be treated as a string.
*/

#include <stdio.h>
#define MAX_WORDS 30
#define MAX_WORD_LEN 20

int main(void)
{
    char sentence[MAX_WORDS][MAX_WORD_LEN + 1]; // +1 for null character
    char input_ch;
    int word_count = 0, char_index = 0;

    printf("Enter a sentence: ");
    while ((input_ch = getchar()) != '\n')
    {
        if (input_ch == '.' || input_ch == '?' || input_ch == '!')
            break;
        else if (input_ch == ' ')
        {
            sentence[word_count][char_index] = '\0'; // Null-terminate the current word
            word_count++;
            char_index = 0; // Reset for the next word
        }
        else if (char_index < MAX_WORD_LEN) // Ensure we don't exceed max word length
        {
            sentence[word_count][char_index++] = input_ch;
        }
    }

    sentence[word_count][char_index] = '\0'; // Null-terminate the last word

    printf("Reversal of sentence: ");
    for (int i = word_count; i >= 0; i--)
    {
        printf("%s", sentence[i]);
        if (i > 0)
            putchar(' '); // Print space between words
    }

    putchar(input_ch); // Print the terminating character
    putchar('\n');

    return 0;
}