/*
8.
Suppose we want a macro that expands into a string containing the current line number and
file name. In other words, we’d like to write

const char *str = LINE_FILE;

and have it expand into

const char *str = "Line 10 of file foo.c";

where foo.c is the file containing the program and 10 is the line on which the invocation
of LINE_FILE appears. Warning: This exercise is for experts only. Be sure to read the
Q&A section carefully before attempting!
*/

#include <stdio.h>

#define STRINGIFY(x) #x             // This macro converts its argument into a string literal

#define TOSTRING(x) STRINGIFY(x)    // This macro ensures that the argument is expanded before 
                                    // being stringified. example: TOSTRING(__LINE__) will expand 
                                    //__LINE__ to the current line number before stringifying it.   

#define LINE_FILE "Line " TOSTRING(__LINE__) " of file " __FILE__   // This macro constructs the desired string by 
                                                                    // concatenating the line number and file name. The __LINE__ and __FILE__ macros are 
                                                                    // predefined by the C preprocessor and provide the current line number and file name, 
                                                                    // respectively. The TOSTRING macro is used to ensure that the line number is properly 
                                                                    // converted to a string before being concatenated with the rest of the message.

int main(void)
{
    const char *str = LINE_FILE;
    printf("%s\n", str);
    return 0;
}