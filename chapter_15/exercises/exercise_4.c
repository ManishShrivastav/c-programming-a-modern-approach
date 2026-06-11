/*
4.
Assume that debug.h is a header file with the following contents:

#ifdef DEBUG
#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)
#else
#define PRINT_DEBUG(n)
#endif

Let testdebug.c be the following source file:

#include <stdio.h>
#define DEBUG
#include "debug.h"

int main(void)
{
    int i = 1, j = 2, k = 3;
    #ifdef DEBUG
        printf("Output if DEBUG is defined:\n");
    #else
        printf("Output if DEBUG is not defined:\n");
    #endif
    PRINT_DEBUG(i);
    PRINT_DEBUG(j);
    PRINT_DEBUG(k);
    PRINT_DEBUG(i + j);
    PRINT_DEBUG(2 * i + j - k);
    return 0;
}

(a) What is the output when the program is executed?

    - OUTPUT:
            Output if DEBUG is defined:
            Value of i: 1
            Value of j: 2
            Value of k: 3
            Value of i + j: 3
            Value of 2 * i + j - k: 1

(b) What is the output if the #define directive is removed from testdebug.c?

    - OUTPUT:
            Output if DEBUG is not defined:

(c) Explain why the output is different in parts (a) and (b).

    - EXPLANATION:

            The output is different because in part (a), the DEBUG macro is defined before including debug.h, 
            which causes the PRINT_DEBUG macro to expand to a printf statement that outputs the value of the 
            variable. In part (b), since the DEBUG macro is not defined, the PRINT_DEBUG macro expands to 
            nothing, resulting in no output for those lines. The conditional compilation directives in debug.h 
            determine whether the debug information is printed based on whether DEBUG is defined or not.

(d) Is it necessary for the DEBUG macro to be defined before debug.h is included in order
    for PRINT_DEBUG to have the desired effect? Justify your answer.

    - ANSWER:

            Yes, it is necessary for the DEBUG macro to be defined before including debug.h in order for 
            PRINT_DEBUG to have the desired effect. This is because the behavior of the PRINT_DEBUG macro 
            is determined by whether DEBUG is defined or not at the time debug.h is processed by the 
            preprocessor. If DEBUG is defined, PRINT_DEBUG will expand to a printf statement that outputs 
            the value of the variable. If DEBUG is not defined, PRINT_DEBUG will expand to nothing, and 
            no debug information will be printed. Therefore, defining DEBUG before including debug.h is 
            essential for enabling the debug output functionality provided by PRINT_DEBUG.
*/