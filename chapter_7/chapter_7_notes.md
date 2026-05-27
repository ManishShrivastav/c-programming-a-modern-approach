# Chapter 7 - Basic Types

## 7.1 Integer Types
- Sign Bit: The left most bit in an integer, which determines the *sign* (positive/negative) of the number.
    - 0 for positive "unisgned" integers
    - 1 for negative "signed" integers.
- Long Integers: Numbers that are too large to be stored in `int` variable.
- Short Integers: If the number is small enough we can save memory by using `short` variable declaration.
- Combined signed/unsigned with long/short to give greater speficication of variable/integer definition.
    ```c
        short int
        unsigned short int

        int
        unsigned int

        long int
        unsigned long int
    ```
- Different CPUs process different size integers:
    - **16-bit machine**:

    | Type                 | Smallest Value     | Largest Value        |
    |----------------------|-------------------|----------------------|
    | short int           | -32,768           | 32,767               |
    | unsigned short int  | 0                 | 65,535               |
    | int                 | -32,768           | 32,767               |
    | unsigned int        | 0                 | 65,535               |
    | long int            | -2,147,483,648    | 2,147,483,647        |
    | unsigned long int   | 0                 | 4,294,967,295        |

    - **32-bit machine**:

    | Type                | Smallest Value     | Largest Value        |
    |---------------------|-------------------|----------------------|
    | short int          | -32,768           | 32,767               |
    | unsigned short int | 0                 | 65,535               |
    | int                | -2,147,483,648    | 2,147,483,647        |
    | unsigned int       | 0                 | 4,294,967,295        |
    | long int           | -2,147,483,648    | 2,147,483,647        |
    | unsigned long int  | 0                 | 4,294,967,295        |
    
    - **64-bit machine**:

    | Type                | Smallest Value              | Largest Value               |
    |---------------------|----------------------------|-----------------------------|
    | short int          | -32,768                    | 32,767                      |
    | unsigned short int | 0                          | 65,535                      |
    | int                | -2,147,483,648             | 2,147,483,647               |
    | unsigned int       | 0                          | 4,294,967,295               |
    | long int           | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807  |
    | unsigned long int  | 0                          | 18,446,744,073,709,551,615 |


- `<limits.h>` is header file that is a part of the standard library which defines macros that represent the smallest and largest values of each integer type.
- More Types in C99:
    - `long long`: Can be signed or unsigned and is used primarily to support 64-bit machines and their capability of using very large integers.

- Standard Signed Integer Types in C99:    
    - `short int`
    - `int`
    - `long int`
    - `long long int`

- Standard Unsigned Interger Types in C99:
    - `unsigned short int`
    - `unsigned int`
    - `unsigned long int`
    - `unsigned long long int`
    - `unsigned char`
    - `_Bool`

- Extended Integer Types: Allowed in C99 for example.. 128-bit integer types.

- Integer Constants: Numbers that appear in the text of a program, not numbers that are read, written, or computed.
    - C allows integer constants to be written in decimal (base 10), octal (base 8), or hexadecimal (base 16).

- Octal Numbers: Written using only 0 through 7, where each position in an octal number represents a power of 8.
    - Must begin with a `0`!
    - Ex. `077777`

- Hexadecimal: written using the digits 0 through 9 plus the letters A through F (lower can caps), which stand for 10 through 15, respectively. Each position in a hex number represents a power of 16. 
    - Must begin with a `0x`!
        - Ex. `0x7fF`
    - Post-fix `L` or `l` to the end to make the compiler read as a long integer. 
    - Post-fix `U` of `u` to the end to make the compiler read as unsigned (positive).
    - Both `L` and `U` can be used in combination and in any order, if the integer is a long unsigned integer.
    - In C99 `LL` or `ll` have type long long int.

- Integer Overflow: When the result of arithemtic operations becomes too large for the initial variable type.
    - Overflow on signed integers causes *undefined* behavior.
    - Overflow on unsigned integers, the result is defined: we get the correct answer modulo 2**n, where n is the number of bits used to store the result.

- Additional Conversion Specifiers:
    - Unsigned Integer:
        - `u`: decimal (base 10)
        - `o`: octal (base 8)
        - `x`: hexadecimal (base 16)
    - Short Integer:
        - `h` in front of `d`, `o`, `u`, or `x`
    - Long Integer:
        - `l` in front of `d`, `o`, `u`, or `x`
    - Long Long Integer
        - `ll` in front of `d`, `o`, `u`, or `x`

## 7.2 Floating Types


## 7.3 Character Types

## 7.4 Type Conversion

## Type Definitions

## 7.6 The `sizeof` Operator