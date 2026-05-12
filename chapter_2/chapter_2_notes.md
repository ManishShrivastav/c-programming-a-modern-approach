# Chapter 2 - Fundamentals

## 2.1 Writing a simple program

```c
#include <stdio.h>

int main(void)
{
    printf("To C, or not to C: that is the question.\n");
    return 0,
}
```

- `#include <stdio.h>`: indicates inclusion of the `standard I/O` library, a package/collection of helpful tools/funcations.

- `printf`: A function that prints formatted text to the terminal window, found within the `stdio.h` library.
    - `\n`: An *escape character* to indicate the cursor to move to a new line within the `printf` call.

- `return 0`: Indicates that the program "returns" the value 0 to the operating system when it terminates.

- Steps to convert *program.c* to a form that the machine can execute:
    1. **Preprocessing**:The program is first given to a **preprocessor**, which obeyscommands that begin with **#** (known as **directives**). A preprocessor is a bit like an editor; it can add things to the program and make modifications.
        - Typically integrated with the **compiler**.
    2. **Compiling**:The modified program now goes to a **compiler**, which translates it into machine instructions (**object code**). The program isn’t quite ready to run yet, however.
    3. **Linking**: In the final step, a **linker** combines the object code produced by the compiler with any additional code needed to yield a complete executable program. This additional code includes library functions (like `printf`) that are used in the program.

- `cc` Compiler: The compiler used in **UNIX**.
    - `cc file_name.c`
    - After compiling and linking the program `cc` leaves the executable program in a file named `a.out` by default.
    - `-o` option: Allows us to chosse the name of the file containing the executable program.
        - `cc -o output_file_name file_name.c`

`-gcc` Compiler: The compiler supplied with **Linux** but is available for many other platfroms as well. Has similar use/handling as `cc` compiler.
    - `gcc -o output_file_name file_name.c`.

## 2.2 The General Form of a Simple Program

- Directives: Commands intended for the preprocessor prior to compilation.
    - Always begin with a `#` character.
    - One line long, no semicolon.

- Headers: `.h` files that contain additional functions/code to be "included" into the program before it is compiled.
    - Ex. `<stdio.h>` -> standard I/O library

- Functions:  simply a series of statements that have been grouped together and given a name. Some functions compute a value; some don't. A function that computes a value uses the `return` statement to specify what value it "returns."
    
- `main`: The only mandatory function within a C program, that gets called automatically when the program is executed.
    - Returns a *status code* (0 or 1) back to the operting system when the program terminates.
    - See [2.1 Writing a Simple Program](#21-writing-a-simple-program) for example.

- Statements: A command to be executed when the program runs.
    - Ex. `return`, `my_func()`

- Printing Strings:
    - String Literal: A series of characters enclosed in double quotation marks.
    - `\n`: New-line character, terminating output on the current line, and moving subsequent output to the next line.


