/*
1.
Write a program that finds the “smallest” and “largest” in a series of words. After the user
enters the words, the program will determine which words would come first and last if the
words were listed in dictionary order. The program must stop accepting input when the user
enters a four-letter word. Assume that no word is more than 20 letters long. An interactive
session with the program might look like this:

Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Smallest word: cat
Largest word: zebra

Hint: Use two strings named smallest_word and largest_word to keep track of the
“smallest” and “largest” words entered so far. Each time the user enters a new word, use
strcmp to compare it with smallest_word; if the new word is “smaller,” use strcpy
to save it in smallest_word. Do a similar comparison with largest_word. Use
strlen to determine when the user has entered a four-letter word.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[21], smallest[21], largest[21];

    char *p_smallest = smallest;
    char *p_largest = largest;
    
    printf("Enter word: ");
    scanf("%20s", word);

    // initialize smallest and largest 
    strcpy(p_smallest, word);
    strcpy(p_largest, word);

    while (1)
    {
        printf("Enter word: ");
        scanf("%20s", word);

        // stop condition: 4-letter word
        if (strlen(word) == 4)
        {
            break;
        }

        if (strcmp(word, p_smallest) < 0)
        {
            strcpy(p_smallest, word);
        }

        if (strcmp(word, p_largest) > 0)
        {
            strcpy(p_largest, word);
        }       
    }

    printf("\n");
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
    
    return 0;
}