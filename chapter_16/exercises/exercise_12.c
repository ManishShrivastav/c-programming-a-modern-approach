/*
12.
Suppose that u is the following union:
union {
double a;
struct {
char b[4];
double c;
int d;
} e;
char f[4];
} u;
If char values occupy one byte, int values occupy four bytes, and double values occupy
eight bytes, how much space will a C compiler allocate for u? (Assume that the compiler
leaves no “holes” between members.)


ANSWER:
    The union u will require 8 bytes of memory.
    Since all members of a union share the same memory location, the size of the union is determined by the largest member. 
    In this case, the largest member is double a and double c, both occupying 8 bytes. Therefore, the total size of the union u will be 8 bytes.
*/