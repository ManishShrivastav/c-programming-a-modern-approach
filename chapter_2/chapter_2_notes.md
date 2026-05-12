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
    2. **Compiling**:The modified program now goes to a **compiler**, which translates it into machine instructions (**object code**). The program isn’t quite ready to run yet, however.
    3. **Linking**: In the final step, a **linker** combines the object code produced by the compiler with any additional code needed to yield a complete executable program. This additional code includes library functions (like `printf`) that are used in the program.