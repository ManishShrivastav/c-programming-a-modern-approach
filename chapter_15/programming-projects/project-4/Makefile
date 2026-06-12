# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Object files
OBJS = remind.o readline.o

# Program File
PROG = remind

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

remind.o: remind.c readline.h
	$(CC) $(CFLAGS) -c remind.c

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm -f $(OBJS) $(PROG)