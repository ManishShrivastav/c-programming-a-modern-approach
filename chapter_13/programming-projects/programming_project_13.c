/*
13.
Modify Programming Project 15 from Chapter 8 so that it includes the following function:

void encrypt(char *message, int shift);

The function expects message to point to a string containing the message to be encrypted;
shift represents the amount by which each letter in the message is to be shifted.
*/

#include <stdio.h>
#include <ctype.h>

void encrypt(char *message, int shift)
{
    while(*message)
    {
        if (isupper(*message))
        {
            *message = ((*message - 'A') + shift) % 26 + 'A';
        }
        else if (islower(*message))
        {
            *message = ((*message - 'a') + shift) % 26 + 'a';
        }
        
        message++;
    }
}

int main(void)
{
    char sentence[80] = {};
    int shift_amount;

    printf("Enter message to be encrypted: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    encrypt(sentence, shift_amount);

    printf("Encrypted message: %s", sentence);

    return 0;
}