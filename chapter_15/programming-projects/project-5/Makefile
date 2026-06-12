# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Object files
OBJS = main.o stack.o

# Executable name
PROG = rpn_calculator

# Default target
all: $(PROG)

# Link object files to create the executable
$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

# Clean up object files and executable
clean:
	rm -rf $(OBJS) $(PROG)