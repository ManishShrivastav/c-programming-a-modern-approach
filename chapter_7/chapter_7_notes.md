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
- Three Floating Point Types:
    1. `float`: Single-precision floating-point
        -  suitable when the amount of precision isn't critical (calculating temperatures to one decimal point, for example).
    1. `double`: Double-precision floating-point
        - provides greater precision that `float`, enough for most programs.
    1. `long double`: Extended-precision floating-point
        - Provides the ultimate precision and is rarely used.

- IEEE Floating-Point Standard: Specifications followed by computers regarding floating-point values.
    - Numbers are stored in a form of scientific notation, with each number having three parts: a **sign**, an **exponent**, and a **fraction**.
        - Exponent: The number of bits reserved determines how large or small numbers can be.
        - Fraction: Determines the precision.
    - IEEE Standard 754, developed by the **Institute of Electrical and Electronics Engineers**, provides two primary formats for floating-point numbers: 
        1. single precision (32 bits)
            - Exponent is 8 bits long (1 byte).
            - Fraction is 23 bits long.
            - Sign is 1 bit.
            - Max value = 3.40E10**38 w/ ~6 decimal digits.
        2. double precision (64 bits)
        3. single extended precision (at least 43 bits)
        4. double extended precision (at least 79 bits)
    
    | Type   | Smallest Positive Value | Largest Value            | Precision        |
    |--------|--------------------------|--------------------------|------------------|
    | float  | 1.17549 × 10⁻³⁸         | 3.40282 × 10³⁸          | ~6–7 digits      |
    | double | 2.22507 × 10⁻³⁰⁸        | 1.79769 × 10³⁰⁸         | ~15–16 digits    |

- `<float.h>`: Provides macros on float bit length characteristics.

- C99 Two Floating Type Categories:
    1. Real Floating Types:
        - `float`
        - `double`
        - `long double`
    2. Complex Types:
        - `float_Complex`
        - `double_Complex`
        - `long double_Complex`
        
- Floating Constants: Must contain a decimal point and/or an exponent; the exponent indicates the power of 10 by which the number is to be scaled. If an exponent is present, it must be preceded by the letter E (or e). An optional + or - sign may appear after the E (or e).
    - 57.0 or 57. or 57.0e0 or 57E0 or 5.7e1 or 5.7e+1 or .57e2 or 570.e-1
    - Automatically stored as `double-precision` numbers in memory for easy conversion to `float` if need.
    - Force `float` format append "F" or "f" to the end of the constant.
    - Force `long double` format append "L" or "l" to the end of the constant.
    - In C99, hexadecimals begin with "Ox" or "OX".

- Reading and Writing Floating-Point Numbers
    - `%e`, `%f`, `%g` are used for reading and writing single-precision floating-point numbers (Chapter 3).
    - For READING (`scanf`):
        - `double` prefix with `l`
        ```c
            double d;
            scanf("%lf", &d);
        ```

        - `long double` prefix with `L`
        ```c
            long double ld;
            scanf("%Lf", &ld);
            printf("%Lf", ld);
        ```

## 7.3 Character Types

## 7.4 Type Conversion

## Type Definitions

## 7.6 The `sizeof` Operator