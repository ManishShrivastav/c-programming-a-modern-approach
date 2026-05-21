# Chapter 5 - Selection Statements

- Types of Statements in C:
    - **Selection Statements**: The `if` and `switch` statements allow a program to select a particular execution path from a set of alternatives.
    - **Iteration Statements**: The `while`, `do`, and `for` statements support iteration (looping).
    - **Jump Statements**: The `break`, `continue`, and `goto` statements cause an unconditional jump to some other place in the program. (The return statement belongs in this category, as well.)
    - **Compound Statements**: Groups several statements into a single statement.
    - **Null Statements**: Which performs no actions. 

## 5.1 Logical Expressions
- L**ogical Expressions**: Test the value of an expression to see if it is "true" or "false.
    - In C, a comparison such as `i < j` yields an integer: either `0` (false) or `1` (true).
- **Relation Operators**: Correspond to the `<`, `>`, `<=`, and `>=` operators of mathematics, except that they produce `0` (false) or `1` (true) when used in expressions.
    - Works for comparing `float` and `int` together.
    - Precedence of the relational operators is lower than that of the arithmetic operators.
        - Ex. `i + j < k - 1` means `(i + j) < (k -1)`
    - The relational operators are left associative.
        - Ex. `i < j < k` means `(i < j) < k`

| Symbol | Meaning                  | Example  | Result |
| ------ | ------------------------ | -------- | ------ |
| `<`    | Less than                | `3 < 5`  | `1` (true)  |
| `>`    | Greater than             | `7 > 2`  | `1` (true)  |
| `<=`   | Less than or equal to    | `4 <= 4` | `1` (true)  |
| `>=`   | Greater than or equal to | `6 >= 9` | `0` (false) |

- **Equality Operators**: Test equality between two expressions or values. Left associative and product either `0` (false) or `1` (true).
    - Have lower precedence that the relational operators.
        - Ex. `i < j == j < k` means `(i < j) == (j < k)` --> Entire statements is true if **both** the `left` and `right` are true or false.

| Symbol | Meaning      | Example  | Result |
| ------ | ------------ | -------- | ------ |
| `==`   | Equal to     | `5 == 5` | `1`    |
| `!=`   | Not equal to | `5 != 3` | `1`    |

- **Logical Operators**: More complicated logical expressions can be built from simpler ones by using `and`, `or`, and `not`.
    - The `!` operator is **unary**, while `&&` and `||` are binary.
    - `!expr` has the value of `1` if the `expr` have value of `0`.
    - `expr1 && expr2` has the value of `1` if the values of `expr1` and `expr2` are both non-zero.
    - `expr1 || expr2` has the value of `1` if either `expr1` or `expr2` or both has a non-zero value.
    - `!` operator has the same precedence as the unary `+` (plus) and `-` (minus) operators.
    - `&&` and `||` precedence is lower than that of the relational and equality operators;
        - Ex. `i < j && k == m` means `(i < j) && (k == m)`.
    - The `!` operator is right associative; `&&` `||` are left associative.

| Symbol | Meaning     | Example    | Result |
| ------ | ----------- | ---------- | ------ |
| `&&`   | Logical AND | `1 && 1`   | `1`    |
| `\|\|` | Logical OR  | `1 \|\| 0` | `1`    |
| `!`    | Logical NOT | `!1`       | `0`    |

- **Short Circuiting**: Within a logical expression, the first condition evaluated can dictate the behavior of continuing the rest of the evaluation.
    - Ex. `(i != 0) && (j / i > 0)` --> if `i != 0` evaluates to False, meaning `i = 0`, then the right side `(j / i > 0)` is not evaluated.

## The `if` Statement
- **`if` Statement**: allows a program to choose between two alternatives by testing the value of an expression.

    ```c
        if (expression) statement;
    ```
    - If the value of expression is non-zero, which C interprets as true, the statement after the parentheses is executed.
- Parentheses around the expression are mandatory; they'are part of the `if` statement, and not part of the expression.
- Compound Statement: An `if` statement that controls two or more staements.

    - ```c
        { statements }
      ```

    - ```c
        if (line_num == MAX_LINES)
        {
            line_num = 0;
            page_num++;
        }
      ```
- The `else` Clause: The statement that follows the word `else` is executed if the expression in parentheses has the value of `0`.
    -   ```c
            if (expression) statement else statement
        ```
    -   ```c
            if (i > j)
                max = i;
            else
                max = j;
        ```
    -   ```c
            if (i > j)
                if (i > k)
                    max = i;
                else
                    max = k;
            else
                if (j > k)
                    max = j;
                else
                     max = k;
        ```
    -   ```c
            if (i > j)
            {
                if (i > k)
                {
                    max = i;
                }
                else
                {
                    max = k;
                }
            }
            else
            {
                if (j > k)
                {
                    max = j;
                }
                else
                {
                    max = k;
                }
            }
        ```
- The dangling `else` problem occurs when nested `if` statements are written without braces, causing the `else` to attach to the nearest unmatched `if`. This can lead to logic errors because the intended grouping may differ from how C actually interprets the code.
    -   ```c
                if (y != 0)
                    if (x != 0)
                        result = x / y;
                else
                    printf("Error: y is equal to 0\n");
        ```
        - The `else` belongs to the inner `if` statement. But our print string reflects the outer variable conditional check, so this would be wrong.
    - **Best Practice fix**: Always use braces to avoid confusion
    -   ```c
            if (y != 0)
            {
                if (x != 0)
                {
                    result = x / y;
                }
                else
                {
                    printf("Error: x is zero\n");
                }
            }
        ```
    - Or To make the else clause part of the outer if statement, we can enclose the inner if statement in braces:
    - Ex.   
        ```c
                if (y != 0) 
                    {
                    if (x != 0)
                        result = x / y;
                    } 
                else
                    printf("Error: y is equal to 0\n");
        ```
- Conditional Expressions: A shorthand way to write an `if-else` statement that returns a value.
    - Conditional Operator: Consists of two symbols (`?` and `:`), which must be used together in the following way: `expr1 ? expr2: expr3`.
        - Requires three oprands instead of one or two, often referred to as a terneray operator.
        - Should be read `"if expr1 then expr2 else expr3"`.
    -   ```c
            int i, j, k;
            i = 1;
            j = 2;
            k = i > j ? i : j;          /* k is now 2 */
            k = (i >= 0 ? i : 0) + j;   /* k is now 3 */
        ```
- **Boolean Values in C89**: There is no Boolean type defined in C89.
    - Define a variable as `int` and assign either 0 or 1.
        - Is not very readable and values that "not allowed" can still be assigned by accident.
        - Define **macros** with names such as `TRUE` and `FALSE`.
            - Ex. `#define TRUE 1`--> `flag = TRUE` --> flag has value of 1.
    - Define a custom `bool` type masked as am `int`.
        - Ex. `#define BOOL int` --> `BOOL flag` --> flag, a variable, now is defined as `BOOL` which acts as an `int` under the hood.
- **Boolean Values in C99**: C99 provides the `_Bool` type.
    - `_Bool`: An integer type (more precisely, an unsigned integer type), so a `_Bool` variable is really just an integer variable in disguise.
        - Can only be assigned a value of 0 or 1.
            - Attempting to store a non-zero value will default to 1.
    - Ex. `_Bool flag; flag = 5` --> The variable `flag` is of type `_Bool` and has a value of 1.
    - Can be tested with an `if` statement.
        - Ex. `if (flag) {....}` --> Tests whether flag is 1.
    - `<stdbool.h>`: Header file added with macro definitions for `_Bool` readability.
        - `bool`: A macro that equals `_Bool`.
        - `true`: A macro which equates to a value of 1.
            - Ex. `flag = true;`
        - `false`: A macro which equates to a value of 0.
            - Ex. `flag = false:`


