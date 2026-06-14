# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Object files
OBJS = inventory.o readline.o

# Executable name
PROG = inventory

# Default target
all: $(PROG)

# Link object files to create the executable
$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
inventory.o: inventory.c readline.h
	$(CC) $(CFLAGS) -c inventory.c

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(PROG)