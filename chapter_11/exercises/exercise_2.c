/*
2.
If i is an int variable and p and q are pointers to int, which of the following assignments
are legal?
(a) p = i;
(b) *p = &i;
(c) &p = q;
(d) p = &q;
(e) p = *&q;
(f) p = q;
(g) p = *q;
(h) *p = q;
(i) *p = *q;

NOTE:
p is the pointer variable.
*p means the value stored at the address that p points to (dereferencing the pointer).

For example, if we have:
int i = 10;
int *p = &i;

memory-wise:
i: 10
p: address of i

Then, 
p      // the address of i (e.g., 0x1000)
*p     // the value at that address, which is 10
&i     // the address of i (same as p)
*/


/*
SOLUTION:
(a) p = i;      // No, p is a pointer and i is an int, so this assignment is not legal.
(b) *p = &i;    // No, *p is an int (the value at the address p points to), and &i 
                    //is an address, so this assignment is not legal.
(c) &p = q;     // No, &p is the address of the pointer variable p, and q is a pointer, so this assignment is not legal.
(d) p = &q;     // No, p is a pointer to int, and &q is the address of a pointer to int, so this assignment is not legal.
(e) p = *&q;    // Yes, *&q is equivalent to q, which is a pointer to int, so this assignment is legal.
(f) p = q;      // Yes, p and q are both pointers to int, so this assignment is legal.
(g) p = *q;     // No, *q is an int (the value at the address q points to), and p is a pointer, so this assignment is not legal.
(h) *p = q;     // No, *p is an int (the value at the address p points to), and q is a pointer, so this assignment is not legal.
(i) *p = *q;    // Yes, *p and *q are both ints (the values at the addresses p and q point to)
*/