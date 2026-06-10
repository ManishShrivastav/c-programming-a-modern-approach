/*
12.
Suppose that the macro M has been defined as follows:

#define M 10

Which of the following tests will fail?
(a) #if M               ---> This test will pass because M is defined and has a nonzero value.
(b) #ifdef M            ---> This test will pass because M is defined.
(c) #ifndef M           ---> This test will fail because M is defined.
(d) #if defined(M)      ---> This test will pass because M is defined.
(e) #if !defined(M)     ---> This test will fail because M is defined.
*/