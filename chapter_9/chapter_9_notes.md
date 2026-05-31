# Chapter 9 - Functions

## 9.1 Definition and Calling Functions
- ```c
        double average(double a, double b)
        {
            return (a + b) / 2;
        }
    ```
    - The word `double` at the beginning is the function's `return` type.
    - The identifiers `a` and `b` (the function's parameters) represent the two numbers that will be supplied when `average` is called.
        - Each parameter mush have a type.
    - Every function has an executable part, called the body, which is enclosed in braces.
    - A body may contain a `return` statement, executing this statement causes the function to "return" to the place from which it was called.
- ```c
        avg = average(x, y);
    ```
    - If needed we can save the value returned from functions within a variable.
- `void` return type: A function who does not return anything.
    - ```c
            void print_count(int n)
            {
                printf("T minus %d and counting\n", n);
            }
        ```
- `void` parameeters: A function that has no parameters can be defined using `void`.
    - ```c
            void print_pun(void)
            {
                printf("To C, or not to C: that is the question.\n");
            }
        ```
- Function Definitions:

    ```c
            return-type function-name (parameters)
            {
                declarations
                statements
            }
    ```
    - Rules governing return types of functions:
        1. Functions may not return arrays, but there are no other restrictions of the return type.
        2. Specifying that the `return` type is `void` indicates that the function doesn't return a value.
        3. If the return type is omitted in C89, the function is presumed to return a value of type `int`. In C99, it's illegal to omit the return type of a function.
    - Function return types can be given on the line above a function declaration.
    - All parameters must have a return type despite if the same type(s) were used prior.
    - If a function returns a value that we intentionally want to ignore, we can either avoid assigning it to a variable or explicitly cast the function call to `(void)` to indicate that the return value is being discarded on purpose.
        - Ex. `printf` returns the number of characters printed, often this is ignored and not saved in a variable. We could do the following:
            ```c
                (void) printf("Hi, Mom!\n");
            ```    

