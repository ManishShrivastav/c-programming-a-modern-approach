// Consider the following program:

#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}


/*
(a) Identify the directives and statements in this program.

        The directives in this program are:
        - `#include <stdio.h>`: 
            This is a preprocessor directive that tells the compiler to 
            include the standard input/output library, which allows the program to use functions like `printf`.

        The statements in this program are:
        - `int main(void)`: 
            This is the main function definition statement, which is the entry point of the program.

        - `printf("Parkinson's Law:\nWork expands so as to ");`:
            This is a function call statement that prints the first part of the output.

        - `printf("fill the time\n");`:
            This is another function call statement that prints the second part of the output.

        - `printf("available for its completion.\n");`:
            This is a function call statement that prints the final part of the output.

        - `return 0;`:
            This is a return statement that indicates the program has finished successfully.


(b) What output does the program produce?

        The program produces the following output:
        Parkinson's Law:
        Work expands so as to fill the time
        available for its completion.

*/
