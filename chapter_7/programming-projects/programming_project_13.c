/*
13.
Write a program that calculates the average word length for a sentence:
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place.
*/

#include <stdio.h>

int main(void) {

    char c;
    double length = 0.0;
    int words = 1;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ')
            words++;
        else 
            length++;
    }

    printf("Average word length: %.1f\n", length / words);
    return 0;
}