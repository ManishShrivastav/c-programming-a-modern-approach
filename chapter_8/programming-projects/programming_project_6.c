/*
6.
The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
messages. Here’s a typical B1FF communiqué:

H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Write a “B1FF filter” that reads a message entered by the user and translates it into B1FF-
speak:

Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Your program should convert the message to upper-case letters, substitute digits for certain
letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.

Hint: Store the original message in an array of characters, then go back through the array,
translating and printing characters one by one.
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void)
{
    char message[MAX_SIZE];
    int i, msg_len = 0;

    printf("Enter message: ");
    for ( i = 0; i < MAX_SIZE; i++)
    {
        message[i] = getchar();
        if (message[i] == '\n')
        {
            break;
        }
        msg_len++;
    }
    printf("In B1FF-speak: ");

	for (i = 0; i < msg_len; i++)
	{
		switch(message[i])
		{
		case 'A': case 'a': putchar('4'); break;
		case 'B': case 'b': putchar('8'); break;
		case 'E': case 'e': putchar('3'); break;
		case 'I': case 'i': putchar('1'); break;
		case 'O': case 'o': putchar('0'); break;
		case 'S': case 's': putchar('5'); break;
		default: putchar(toupper(message[i])); break;
		}
	}

	for (i = 0; i < 10; i++)
		putchar('!');

	putchar('\n');

	return 0;

}