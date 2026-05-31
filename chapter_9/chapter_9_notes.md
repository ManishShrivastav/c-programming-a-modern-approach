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

## 9.2 Function Declarations
- Implicit Declaration: When an older (C89) compiler assumes that a function returns an `int` ot the other/types of the parameters due to the functions not being defined prior to being read/used. Modern (C99) compilers will throw a compilation error.
- Function Declaration: Provides the compiler with a brief glimpse at a function whose full definition will appear later. A function declaration resembles the first line of a function definition with a semicolon added at the end:
    - ```c
            return-type function-name (parameters);
        ```
    - AKA "Function Prototypes": A prototype provides a complete description of how to call a function:
        - How many arguments to supply.
        - What their types should be.
        - What type of result will be returned.
    - Function Prototypes don't have to specify the *names* of the function's parameters, as long as their *types* are present.
        - ```c
                double average(double, double);
            ```
