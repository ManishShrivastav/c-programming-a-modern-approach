/*
14.
Modify Programming Project 16 from Chapter 8 so that it includes the following function:

bool are_anagrams(const char *word1, const char *word2);

The function returns true if the strings pointed to by word1 and word2 are anagrams.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2)
{
    int letters[26] = {0};
    int i;

    // Count the letters in word1
    for (i = 0; word1[i] != '\0'; i++)
    {
        if (isalpha(word1[i]))
        {
            letters[tolower(word1[i]) - 'a']++;
        }
    }

    // Subtract the counts based on word2
    for (i = 0; word2[i] != '\0'; i++)
    {
        if (isalpha(word2[i]))
        {
            letters[tolower(word2[i]) - 'a']--;
        }
    }

    // Check if all counts are zero
    for (i = 0; i < 26; i++)
    {
        if (letters[i] != 0)
        {
            return false; // Not anagrams
        }
    }

    return true; // Anagrams
}

int main(void)
{
    char word1[100], word2[100];

    printf("Enter first word: ");
    scanf("%99s", word1);

    printf("Enter second word: ");
    scanf("%99s", word2);

    if (are_anagrams(word1, word2))
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}