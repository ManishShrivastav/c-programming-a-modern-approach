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

## 9.3 Arguments

### Arguments vs Parameters:
- Parameters appear in function definitions; they're dummy names that represent values to be supplied when the function is called.
- Arguments are expressions that appear in function calls:
    - In C, arguments are **passed by value**: When a function is called, each argument is evaluated and its value assigned to the corresponding parameter.
    - Since the parameter contains a **copy** fo the argument's value, **any changes made to the parameter during the execution of the function don't affect the argument**.

### Argument Conversions:
- C allows function calls in which the types of the arguments don't match the types of the parameters.
    - **The compiler has encountered a prototype prior to the call**: The value of each argument is implicitly converted to the type of the corresponding parameter as if by assignment.
    - **The compiler has not encountered a prototype prior to the call**: The compiler performs the default argument promotions:
        1. `float` arguments are converted to `double`.
        2. The integral promotions are performed, causing `char` and `short` arguments to be converted to `int`. In C99, the integer promotions are performed.

### Array Arguments:
- Arrays can be passed as arguments to functions, but their length information is not preserved.
    - When an array is passed to a function, it decays to a pointer to its first element.
    - Inside the function, the parameter is treated as a pointer, not an array.
    - Calling `sizeof` on an array parameter therefore yields the size of the pointer (typically 8 bytes on a 64-bit system), not the size of the original array.
    - ```c
            int sum_array(int a[], int n)
            {
                int i, sum = 0;

                for (i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                return sum;
            }

        The prototype for sum_array has the following appearance:
            int sum_array(int a[], int n);
        As usual, we can omit the parameter names if we wish:
            int sum_array(int [], int);
        ```
### Variable Length Array (VLA):
- Using variables to dynamically set the length of arrays used as function parameters.
    -   ```c
                int sum_array(int n, int a[n])
                {
                    ....
                }
        ```
    - Note that `n` is initialized before being used as a feature of the array parameter declaration.
- Prototypes and Array Parameters:
    ```c
            int sum_array(int n, int a[n]);         /* version 1 */

        Another possibility is to replace the array length by an asterisk (*):
            int sum_array(int n, int a[*]);         /* version 2a */
    ```
    - The reason for using `*` notation is that parameter names are optional in function declarations. If the name of the first parameter is omitted, it wouldn't be possible to specify that the length of array is `n`, but the `*` provieds a clue that the length of array is related to parameters that come earlier in the list:
        -   ```c
                    int sum_array(int , int a[*]);         /* version 2b */

                It is also legal to leave the brackets empty, as we normally  do when declaring an array parameter :

                    int sum_array(int n, int a[]);         /* version 3a */
                    int sum_array(int , int []);          /* version 3b */
            ```
    - Example:

        ```c
                int sum_two_dimensional_array(int n, int m, int a[n][m])
                {
                    int i, j, sum = 0;

                    for (i = 0; i < n; i++)
                    {
                        for (j = 0; j < m; j++)
                        {
                            sum += a[i][j];
                        }
                    }
                    return sum;
                }
            
            Prototypes for this function include the following:
                int sum_two_dimensional_array(int n, int m, int a[n][m]);
                int sum_two_dimensional_array(int n, int m, int a[*][*]);
                int sum_two_dimensional_array(int n, int m, int a[][m]);
                int sum_two_dimensional_array(int n, int m, int a[][*]);
        ```
### Using `static` in Array Parameter Declarations:
-   ```c
            int sum_array(int a[static 3], int n)
            {
                ...
            }
    ```
    - Putting `static` in front of the number 3 indicates that the length of a is guaranteed to be atleast 3.
    - Using `static` in this way has no effect on the behavior of the program. The presence of `static` is merely a "hint" that may allow a C compiler to generate faster instructions for accessing the array.
        - If the compiler knows that an array will always have a certain minimum length, it can arrange to "prefetch" these elements from memory when the function is called, before the elements are actually needed by statements within the function.
    - Multidimensional Arrays: `static` can only be applied to the first dimension of the MD array.

### Compound Literals:
- An unnamed array that's created **on the fly** by simply specifying which elements it contains.
    -   ```c
                total = sum_array((int []) {3, 0, 3, 4, 1}, 5);

            You can also specify the length by:
                (int [4]) {1, 9, 2, 1} is equivalent to (int[]) {1, 9, 2, 1}
        ```
    - `lvalues`, so that values of its elements can be changed.
    - Can make it **read-only** by adding `const`: `(const int[] {5, 4})`
            

## 9.4 The `return` Statement
- `return`: A statement that stops a function and returns back to where the function was called, wkth any value following the return keyword.
    - If the type of the expression in a `return` statement doesn't match the function's return type, the expression will be implicitly converted to the return type.
    - `return` statements may appear in functions whose return type is `void`, provided that no expression is given.
    - When used in `main` the `return` statement exits the program.

## 9.5 Program Termination
- Omitting `return` type:
    - Older C programs often omit the main function return type.
    - C99, omitting the return type of a function is illegal.
- `exit` Function: A function within the `<stdlib.h>`, with arguments passed to `exit` that have the same meaning as `main`'s return value. Both indicate the programs status at termination.
    - `exit(0)`: Normal termination
    - `exit(>0)`: Abnormal termination
    - `EXIT_SUCCESS` and `EXIT_FAILURE` are macros defined within the `<stdlib.h>` that are implementation-defined, with typical values of `0` and `1` respectively.
    - The difference between `return` and `exit` is that `exit` causes program termination regardless of which function calls it. The `return` statement causes program termination only when it appears in the main function.

## 9.6 Recursion
- Recursive Function: A function is recursive if it calls itself.
    ```c
         For n! = n x (n - 1)!

                int fact (int n)
                {
                    if (n <= 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return n * fact(n - 1);
                    }
                }

            i = fact(3);

        Here is what happens:
            fact(3) finds that 3 is not less that or equal to 1, so it calls
                fact(2), which finds that 2 is not less that or equal to 1, so it calls
                    fact(1), which finds that 1 is less than or equal to 1, so it returns 1, causing
                fact(2) to return 2 x 1 = 2, causing
            fact(3) to return 3 x 2 = 6.
        
        Notice how the  unfinished calls of fact() "pile up" until fact() is finally passed 1. At that point the old calls of fact() begin to "unwind" one by one, until the original call -fact(3) - finally returns with the answer 6.
    ```

    Formula:
        $$ x^n = x \cdot x^{n-1} $$

    ```c
                int power(int x, int n)
                {
                    if (n == 0)
                    {
                        return 1;
                    }
                    else
                    {
                        return x * power(x, n - 1)
                    }
                }
        
        The call power(5, 3) would be executed as follows:
            power(5, 3) finds that 3 is not equal to 0, so it calls
                power(5, 2), which finds that 2 is not equal to 0, so it calls
                    power(5, 1), which finds that 1 is not equal to 0, so it calls
                        power(5, 0), which finds that 0 is equal to 0, so it returns 1, causing
                    power(5, 1) to return 5 × 1 = 5, causing
                power(5, 2) to return 5 × 5 = 25, causing
            power(5, 3) to return 5 × 25 = 125.
        Incidentally, we can condense the power function a bit by putting a conditional
        expression in the return statement:
                int power(int x, int n)
                {
                    return n == 0 ? 1 : x * power(x, n - 1);
                }
    ```
- Termination Condition: A test that is evaluated as soon as a recursive function is called to either terminate the recursive calls or countinue to recurse.
    - All recursive functions need some kind of termination condition in order to prevent infinite recursion.
- Quicksort Algorithm: A sorting algorithm that is an example of the **divide and conquer** technique.
    - Divide and Conquer: Large problems are divided into smaller pieces that are tackled by the same algorithm.

        1. Choose an array element e (the “partitioning element”), then rearrange the array so that elements 1, ..., i – 1 are less than or equal to e, element i contains e, and elements i + 1, ..., n are greater than or equal to e.
        2. Sort elements 1, ..., i – 1 by using Quicksort recursively.
        3. Sort elements i + 1, ..., n by using Quicksort recursively.

        ![alt text](image.png)
        ![alt text](image-1.png)

- Improving Quicksort:
    1. Improving the partitioning algorithm.
    2. Using a different method to sort small arrays (<= 25 elements).
    3. Making Quicksort nonrecursive.