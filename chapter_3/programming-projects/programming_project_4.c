/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
xxxx and then displays the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{
    int start, mid, end;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d) %d-%d", &start, &mid, &end);
    printf("You entered %d.%d.%d\n", start, mid, end);
    return 0;
}