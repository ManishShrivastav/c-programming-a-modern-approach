# Chapter 4 - Expressions

- Expressions: Formulas that show how to compute a value.
    - Variables: Represents a value to be computed as the program runs.
    - Constants: Represents a value that doesn't change

- Operators: Symbols that perfrom specific operations on values or variables (e.g., `+, -, *, /`).
- Operands: The values or expressions on which the operators act.

## 4.1 Arithmetic Operators
- Arithmetic Operators: Operators that perform addition, subtraction, multiplication, and division.

- Unary: Operators that only require one operand.

- Binary: Operators that require two operands.
    - Additive:
        - Addition `+`: Adds two values together.
        - Subtraction `-`: Subtracts two values from another.
    - Multiplicative:
        - Multiplication `*`: Multiplies two values together.
        - Division `/`:
            - `int / int` "Integer division" returns the *floored* value of the quotient.
            - `float / int`: returns a `float`.
        - Remainder (modulo) `%`: `i % j` returns the remainder of the quotient `i / j`.
            - Requires both operands to be type `int`.

    | *Unary* | *Binary* |  |
    |---|---|---|
    |  | *Additive* | *Multiplicative* |
    | + unary plus | + addition | * multiplication |
    | - unary minus | - subtraction | / division |
    |  |  | % remainder |
    |
- Implementation-defined Behavior: The C standard allows certain aspects of the language to vary between different compilers, architectures, or operating systems, but requires that the implementation document how it behaves.


