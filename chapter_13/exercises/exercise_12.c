/*
12.
Write the following function:

void get_extension(const char *file_name, char *extension);

file_name points to a string containing a file name. The function should store the exten-
sion on the file name in the string pointed to by extension. For example, if the file name
is "memo.txt", the function will store "txt" in the string pointed to by extension. If
the file name doesn’t have an extension, the function should store an empty string (a single
null character) in the string pointed to by extension. Keep the function as simple as pos-
sible by having it use the strlen and strcpy functions.
*/

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension)
{
    const char *p = file_name + strlen(file_name); // address of file_name + length of file_name = address of null character at end of file_name

    while (p > file_name && *p != '.') // while p is greater than the address of the first character in file_name and the character at address p is not a period
        p--;

    if (*p == '.')
        strcpy(extension, p + 1);
    else
        strcpy(extension, "");
}

int main(void)
{
    char extension[20];
    printf("Enter a file name: ");
    char file_name[100];
    scanf("%99s", file_name); // read a string from the user and store it in file_name, with a maximum of 99 characters to prevent buffer overflow

    get_extension(file_name, extension);
    printf("The extension is: %s\n", extension);

    return 0;
}