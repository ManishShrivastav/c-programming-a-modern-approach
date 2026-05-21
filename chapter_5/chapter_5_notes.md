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


