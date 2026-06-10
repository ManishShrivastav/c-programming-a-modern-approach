/*
11.
(C99) C programmers often use the fprintf function to write error messages:

fprintf(stderr, "Range error: index = %d\n", index);

stderr is C’s “standard error” stream; the remaining arguments are the same as those for
printf, starting with the format string. Write a macro named ERROR that generates the
call of fprintf shown above when given a format string and the items to be displayed:

ERROR("Range error: index = %d\n", index);
*/

#include <stdio.h>

#define ERROR(format, ...) fprintf(stderr, format, __VA_ARGS__)     
// __VA_ARGS__ is a special identifier that represents the variable arguments passed to 
// the macro called variadic macro. It allows the macro to accept a variable number of 
// arguments and use them in the expansion of the macro. In this case, it is used to pass 
// the additional arguments (like index) to the fprintf function when the ERROR macro is 
// called.

/*

*/
int main(void)
{
    int index = 5;
    ERROR("Range error: index = %d\n", index);
    return 0;
}