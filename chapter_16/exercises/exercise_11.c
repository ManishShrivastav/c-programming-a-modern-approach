/*
11.
Suppose that s is the following structure:
struct {
    double a;
    union {
    char b[4];
    double c;
    int d;
    } e;
    char f[4];
} s;
If char values occupy one byte, int values occupy four bytes, and double values occupy
eight bytes, how much space will a C compiler allocate for s? (Assume that the compiler
leaves no “holes” between members.)


ANSWER:
    The structure s will require 20 bytes of memory.
    The double a will require 8 bytes, the union e will require 8 bytes (the size of the largest member, which is double c), 
    and the char array f (char f[4]) will require 4 bytes. Therefore, the total size of the structure s will be 8 + 8 + 4 = 20 bytes.
*/