/*
10.
Functions can often—but not always—be written as parameterized macros. Discuss what
characteristics of a function would make it unsuitable as a macro.


    Functions that have side effects, such as modifying global variables or 
    performing input/output operations, would be unsuitable as macros. 
    This is because macros are expanded by the preprocessor and do not have the 
    same scope and behavior as functions. Additionally, functions that require type 
    checking or have complex logic may not be suitable for macros, as macros do not 
    provide the same level of error checking and can lead to unexpected results if 
    not used carefully.
*/