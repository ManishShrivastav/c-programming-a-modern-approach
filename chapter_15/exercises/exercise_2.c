/*
2.
Which of the following should not be put in a header file? Why not?
(a) Function prototypes         ----> Should be put in a header file to allow other source files to use the functions.

(b) Function definitions        ----> Should not be put in a header file because it can lead to multiple definition errors 
                                     if the header is included in multiple source files. Function definitions should be placed 
                                     in source files (.c) and only the prototypes should be in the header files (.h).

(c) Macro definitions           ----> Should be put in a header file to allow other source files to use the macros.

(d) Type definitions            ----> Should be put in a header file to allow other source files to use the types.
*/