/*
5.
Suppose that a program consists of three source files—main.c, f1.c, and f2.c—plus
two header files, f1.h and f2.h. All three source files include f1.h, but only f1.c and
f2.c include f2.h. Write a makefile for this program, assuming that the compiler is gcc
and that the executable file is to be named demo.

SOLUTION:

    CC = gcc
    CFLAGS = -Wall -Wextra -Wpedantic -std=c99

    demo: main.o f1.o f2.o
        $(CC) $(CFLAGS) -o demo main.o f1.o f2.o

    main.o: main.c f1.h
        $(CC) $(CFLAGS) -c main.c

    f1.o: f1.c f1.h f2.h
        $(CC) $(CFLAGS) -c f1.c

    f2.o: f2.c f1.h f2.h
        $(CC) $(CFLAGS) -c f2.c

*/

/*
6.
The following questions refer to the program described in Exercise 5.
(a) Which files need to be compiled when the program is built for the first time?

    SOLUTION:
    When the program is built for the first time, all source files need to be compiled. This includes:
        - main.c (which depends on f1.h)
        - f1.c (which depends on f1.h and f2.h)
        - f2.c (which depends on f1.h and f2.h)

(b) If f1.c is changed after the program has been built, which files need to be recompiled?

    SOLUTION:
        If f1.c is changed, only f1.o needs to be recompiled. The main.o and f2.o files do not need to be 
        recompiled because they are not directly affected by changes in f1.c.

(c) If f1.h is changed after the program has been built, which files need to be recompiled?

    SOLUTION:
        If f1.h is changed, all three object files (main.o, f1.o, and f2.o) need to be recompiled because 
        they all depend on f1.h.

(d) If f2.h is changed after the program has been built, which files need to be recompiled?

    SOLUTION:
        If f2.h is changed, only f1.o and f2.o need to be recompiled because they are the only files that depend on f2.h. 
        The main.o file does not need to be recompiled because it does not depend on f2.h.
*/