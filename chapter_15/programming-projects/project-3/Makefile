# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Object files
OBJS = qsort.o quicksort.o

# Program file 
PROG = qsort

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

qsort.o: qsort.c quicksort.h
	$(CC) $(CFLAGS) -c qsort.c

quicksort.o: quicksort.c quicksort.h
	$(CC) $(CFLAGS) -c quicksort.c

clean:
	rm -rf $(OBJS) $(PROG)