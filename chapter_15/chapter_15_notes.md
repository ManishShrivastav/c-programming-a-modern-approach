# Chapter 15 - Writing Large Programs

## 15.1 Source Files
- Source Files: Files that have the `.c` extension.
    - Each source file contains part of the program, primarily definitions of functions and variables.

- enefits of splitting into multiple files:
    - Individual compilation of files for frequent changes of separate scopes.

## 15.2 Header Files
- Header File: Files that are included via the `#include` directive.
    - End in `.h` extension.
    - Sometimes referred to as *include files*.
- `#include` Directive:
    - 2 Primary Forms and 1 less used/frequent form:
        1. `#include <filename>`: Used for header files that belong to C's own linrary.
        2. `#include "filename"`: Used for all other header files (also including one we create).
        3. `#include tokens`: The preprocessor will scan the tokens and replace any macros that it finds.
    - `-Ipath`: a command-line option used to edit the default search path for header files.

    ```c
        #include "c:\cprogs\utils.h"    /* Windows path */

        #include "/cprogs/utils.h"      /* UNIX path */
    ```
    - Note: This is not a string literal and backslashes are not escaped.

    ```c
        #if defined(IA32)
            #define CPU_FILE "ia32.h"
        #elif defined(IA64)
            #define CPU_FILE "ia64.h"
        #elif defined(AMD64)
            #define CPU_FILE "amd64.h"
        #endif

        #include CPU_FILE
    ```

    ![alt text](images/image1.png)

- `extern` Variables: Variables declared with `extern` are linked to variable definitions found in header files when included. Memory is set aside for the variable once shared amongst the files where included.
    - Omit the size of an array when using `extern` variable for an array. 
    ```c
        extern int a[];
    ```

- Protecting Header Files:
```c
    #ifndef BOOLEAN_H
    #define BOOLEAN_H
    #define TRUE 1
    #define FALSE 0
    typedef int Bool;
    #endif
```
## 15.3 Dividing a Program into Files


## 15.4 Building a Multiple File Program
- Makefiles: a file containing the information necessary to build a program.
    - A makefile not only lists the files that are part of the program, but also describes dependencies among the files.
    1. Each command in a makefile must preceded by a tab character.
    2. A makefile is normally stored in a file named `Makefile` or `makefile`.
    3. To invoke --> `make target`

    ```makefile
    justify: justify.o word.o line.o
            gcc -o justify justify.o word.o line.o

    justify.o: justify.c word.h line.h
            gcc -c justify.c

    word.o: word.c word.h
            gcc -c word.c

    line.o: line.c line.h
            gcc -c line.c
    ```
- Rules: groups of lines in a makefile.
- Targets: The first line in each rule is a `target` file to build, followed by the target's file dependencies.
    ```makefile
    justify: justify.o word.o line.o
        gcc -o justify justify.o word.o line.o
    ```
- Command: Tabbe nested line in a rule.

- Deining Macros Outside a Program:
- `gcc -D`: Defines a macro in-line.

    ```makefile
        gcc - DDEBUG=1 foo.c
    ```
    - In this example, the **DEBUG** macro is defined to have the value of 1 in the program `foo.c` just as if the line
        ```c
            #define DEBUG 1
        ``` 
- `gcc -U`: Undefine a macro in-line.



