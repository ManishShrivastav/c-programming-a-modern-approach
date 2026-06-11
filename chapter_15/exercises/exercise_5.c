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