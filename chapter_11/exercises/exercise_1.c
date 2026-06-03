/*
1.
If i is a variable and p points to i, which of the following expressions are aliases for i?
(a) *p      ----> no, *p is an alias for the value pointed to by p, which is i, but it is not an alias for i itself.
(b) &p      ----> no, &p is the address of the pointer p, not an alias for i.
(c) *&p     ----> no, *&p is equivalent to p, which is the address of i, not an alias for i.
(e) *i      ----> no, *i is not a valid expression since i is not a pointer.
(g) *&i     ----> no, *&i is equivalent to i, but it is not an alias for i itself.
(b) &p      ----> no, &p is the address of the pointer p, not an alias for i.
(d) &*p     ----> no, &*p is equivalent to p, which is the address of i, not an alias for i.
(f) &i      ----> yes, &i is the address of i, which can be considered an alias for i.
(h) &*i     ----> no, &*i is not a valid expression since i is not a pointer.
*/