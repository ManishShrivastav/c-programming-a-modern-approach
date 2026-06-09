/*
11.
Modify Programming Project 13 from Chapter 7 so that it includes the following function:

double compute_average_word_length(const char *sentence);

The function returns the average length of the words in the string pointed to by sentence.
*/

#include <stdio.h>
#include <ctype.h>

double compute_average_word_length(const char *sentence);

int main(void) {

    char sentence[101];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Average word length: %.1f\n", 
           compute_average_word_length(sentence));
    return 0;
}

double compute_average_word_length(const char *sentence) {

    int words = 0, length = 0;
    
    while (*sentence) {
        while (*sentence && !isspace(*sentence)) {
            sentence++;
            length++;
        }
        words++;
        while (*sentence && isspace(*sentence))
            sentence++;
    }
    return (double) length / words;
}