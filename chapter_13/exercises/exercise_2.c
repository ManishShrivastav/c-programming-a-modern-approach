/*2.
Suppose that p has been declared as follows:
char *p = "abc";
Which of the following function calls are legal? Show the output produced by each legal
call, and explain why the others are illegal.
(a) putchar(p);
(b) putchar(*p);
(c) puts(p);
(d) puts(*p);

*/

#include <stdio.h>

int main(void)
{
    char *p = "abc";

    // (a) putchar(p); // Illegal: putchar expects an int representing a character, but p is a pointer to a string.

    // (b) putchar(*p); // Legal: *p dereferences the pointer p, giving the first character 'a'. Output: a

    // (c) puts(p); // Legal: puts expects a string (char pointer), and p is a pointer to the string "abc". Output: abc

    // (d) puts(*p); // Illegal: *p gives the first character 'a', which is not a valid string. 
    //              // puts expects a null-terminated string, so this will cause undefined behavior.

    return 0;
}