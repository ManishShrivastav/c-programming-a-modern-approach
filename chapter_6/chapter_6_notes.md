# Chapter 6 - Loops
- **Loop**: A statement whose job is to repeatedly execute some other statement (the loop body).
- **Controlling Expression**: An expression that is evaluated each time the loop body is executed (an **iteration** of the loop); if the expression is true (has a value that's not zero) the loop continues to execute.
- Three iteration statements:
    1. `while`: used for loops whose controlling expression is tested *before* the loop body is executed.
    2. `do`: used if the expression is tested *after* the loop body is executed.
    3. `for`: convenient for loops that increment or decrement a counting variable.
- `break`: jumps out of a loop and transfers control to the next statement after the loop.
- `continue`: skips the rest of a loop iteration.
- `goto`: jumps to any statement within a function.

## 6.1 The `while` Statement

```c
    while ( expression ) statement
```

```c
    while (i < n)       /* controlling expression */
        i = i * 2;      /* loop body */
```
- **Infinite Loops**: A loop that won't terminate because the controlling expression is always a non-zero value.
    - Deliberately can create infinite loops: `while (1)....`
        - Unless acted upon by a control statement (`break`, `got`, `return`).

- Example:
    ```c
        /* Prints a table of squares using a while statement */
        #include <stdio.h>
        int main(void)
        {
            int i, n;
            printf("This program prints a table of squares.\n");
            printf("Enter number of entries in table: ");
            scanf("%d", &n);
            
            i = 1;
            while (i <= n) 
            {
                printf("%10d%10d\n", i, i * i);
                i++;
            }
            return 0;
        }
    ```

## 6.2 The `do` Statement
- `do` **Statement**: Closely related to the `while` statement but the **controlling expression** is evaluated *after* each execution of the loop body.

```c
    do statement while ( expression );
```

```c
    i = 10;
    do
    {
        printf("T minus %d and counting\n", i);
    } while (i > 0);
```
- Example:
```c
    /* Calculates the number of digits in an integer */
    #include <stdio.h>
    int main(void)
    {
    int digits = 0, n;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);
    do {
    n /= 10;
    digits++;
    } while (n > 0);
    printf("The number has %d digit(s).\n", digits);
    return 0;
    }
```

To see why the do statement is the right choice, let’s see what would happen if we were to replace the do loop by a similar while loop:
```c
    while (n > 0) 
    {
        n /= 10;
        digits++;
    }
```
If n is 0 initially, this loop won't execute at all, and the program would print.
```text
    The number has 0 digit(s).
```

## 6.3 The `for` Statement
- `for` **Statement**: Ideal for loops that have a "counting" variable, but it's versatile enough to be used for other kinds of loops as well.
```c
    for ( expr 1; expr2; expr3) statement
```
```c
    for (i = 10; i > 0; i--)
        printf("T minus %d and counting\n", i);
```
- **Hint**: `for (init; condition; update)`
- A `for` loop is just *syntactic sugar* for a very specific pattern of a `while` loop.
    - ex.
        ```c
            expr1;
            while (expr2)
            {
                statement;
                expr3;
            }
        ```
    - expr1 is the initialization of a variable (typically `int` to increment/decrement).
    -expr2 is the controlling expression gating entrance to the loop body.
    expr3 is the update to the expr1 variable to change the outcome of the evaluation of the controlling expression on the next iteration.
    
    ```c
        i = 10;
        while (i > 0)
        {
            printf("T minus %d and counting\n", i);
            i--;
        }
    ```
    **OR**
    ```c
        for (i = 10; i > 0; --i)
        {
            printf("T minus %d and counting\n", i);
        }
    ```
- `for` Statement idioms:
    - **Counting up from 0 to n - 1**:
        - for (i = 0; i < n; i++) ...
    - **Counting up from 1 to n**:
        - for (i = 1; i <= n; i++) ...
    - **Counting down from n - 1 to 0**:
        - for (i = n - 1; i >= 0; i--) ...
    - **Counting up from n to 1**:
        - for (i = n; i > 0; i--) ...
- You can omit any expression within the `for` statement, just keep the `;` placeholder for the blank space.
    - Example:
    ```c
        i = 10;
        for (; i > 0; --i)
            printf("T minus %d and counting\n", i);
    ```
    ```c
        for (i = 10; i > 0;)
            printf("T minus %d and counting\n", i--);
    ```
- In **C99 and later**, a variable can be defined in the initializatio expression (expr1) of a `for` loop. The scope of that variable is limited to the loop itself.
    - Example:
        ```c
            for (int i = 0; i < n; i++)
            {
                ...
                printf("%d", i);    /* legal; i is visible inside loop */
            }
            printf("%d", i);        /*** WRONG ***/
- **Comma Operator**: Used when we might like to write a for statement with two (or more) initialization expressions or one that increments several variables each time the loop operates.
    ```text
        expr1, expr2
    ```
- Example:
    ```c
        /* Prints a table of squares using a for statement */
        #include <stdio.h>
        int main(void)
        {
            int i, n;

            printf("This program prints a table of squares.\n");
            printf("Enter number of entries in table: ");
            scanf("%d", &n);

            for (i = 1; i <= n; i++)
            {
                printf("%10d%10d\n", i, i * i);
            }
            return 0;
        }
    ```

## 6.4 Exiting from a Loop
- `break` Statement: Used to jump out of a `while`, `do`, or `for` loop.
    - Transfers control out of the innermost enclosing `while`, `do`, `for`, or `switch` statement. Thus, when these statements are nested, the `break` statement can escape only one level of nesting.
- `continue` Statement: Transfers control to a point just before the end of the loop body. Control remains within the loop.
    - "Continues" the loop over again from the beginning.
    ```c
        n = 0;
        sum = 0;
        while (n < 10)
        {
            scanf ("%d", &i);
            if (i == 0)
            {
                continue;
            }
            sum += i;
            n++;
        }
    ```
- `goto` Statement: Capable of jumping to any statement in a function, provided that the same statement has a label.
    - NOTE: C99 places an additional restriction on the `goto` statement, that it can't be used to bypass the declaration of a variable length array.
    - Label (identifier): An identifier at the beginning of a statement.
        - Ex. 
            ```text
                identifier: statement
            ```
            ```c
                goto identifier;
            ```
        

## 6.5 The `Null` Statement
- `null` Statement: Devoid of symbols except for the semicolon at the end.
    - Example: `i = 0; ; j= 1;` --> the middle statement is `null`.
    - Primarily good for writing loops whose bodies are empty.
        - Ex.
            ```c
                for (d = 2; d < n &&n % d != 0; d++)
                    /* empty loop body */ ;
            ```

