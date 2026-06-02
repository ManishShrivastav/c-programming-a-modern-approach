# Chapter 10 - Program Organization


## 10.1 Local Variables
- Local Variable: A variable that is declared in the body of a function.
    ```c
            int sum_digits(int n)
            {
                int sum = 0;        /* local variable */

                while (n > 0)
                {
                    sum += n % 10;
                    n /= 10;
                }

                return sum;
            }
    ```

- Automatic Storage Duration: The storage duration of a variable is the portion of program execution during which storage for the variable exists. Storage for a local variable is "automatically" allocated when the enclosing function is called and de-allocated when the function returns, so the variable is said to have **automatic storage duration**.
    - Local variables do not retain their value wnen its enclosing function returns.
    - Parameters have the same properties as local variables.
        - Initialized automatically when a function is called.

- Block Scope: The scope of a variable is the portion of the program text in which the variable can be referenced. A local variable has **block scope**: it is visible from its point of declaration to the end of the enclosing function body.
    - Since the scope of a local variable doesn't extend beyond the function to which it belongs, other functions can use the same name for other purposes.

- Static Local variables: Putting the word **static** in the declaration of a local variable causes it to have **static storage duration** instead of automatic storage duration.
    - **Static Storage Duration**: Has a permanent storage location, so it retains its value throughout the execution of the program.
        ```c
                void f(void)
                {
                    static int i;       /* static local variable */
                    ...
                }
        ```

        Since the local variable *i* has been declared *static*, it occupies the same memory location throughout the execution of the program. When *f* returns, *i* won't lose its value.
        
        A static local variable still has block scope,so it's not visible to other functions. In a nutshell, a static variable is a place to hide data from other functions but retain it for future calls on the same function.             

## 10.2 External Variables


## 10.3 Blocks


## 10.4 Scope


## 10.5 Organizing a C Program

