/*
15.
Suppose that a program needs to display messages in either English, French, or Spanish.
Using conditional compilation, write a program fragment that displays one of the following
three messages, depending on whether or not the specified macro is defined:

Insert Disk 1 (if ENGLISH is defined)
Inserez Le Disque 1 (if FRENCH is defined)
Inserte El Disco 1 (if SPANISH is defined)
*/

#include <stdio.h>

// Define one of the following macros to test the program
// #define ENGLISH
// #define FRENCH
#define SPANISH

int main(void)
{
#ifdef ENGLISH
    printf("Insert Disk 1\n");
#elif defined(FRENCH)
    printf("Inserez Le Disque 1\n");
#elif defined(SPANISH)
    printf("Inserte El Disco 1\n");
#else
    printf("No language defined\n");
#endif  
    return 0;
}