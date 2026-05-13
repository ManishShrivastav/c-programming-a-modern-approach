# Chapter 3 - Formatted Input/Output

## 3.1 The `printf` Function

- **`printf`**: A function designed to display the contents of a string, known as the **format string**, with values possibly inserted at specified points in the string.
    - Ex. `printf(string, expr1, expr2, ...);`

- **Conversion Specifications**: A placeholder representing a value to be filled in during printing. Begins with `%` and is followed by a character (`f`, `d`, etc.) that specifies how the value is *converted* from its internal form (binary) to printed form (characters).
    - Common Conversion Specifiers:
        1. `d`: Displays an integer in decimal (base 10) form. `p` indicates the minimum nymber of digits to be displayed (extra zeros are added to the beginning of the number if neccessary).
        2. `e`: Displays a floating-point number in exponential format (scientific notation). `p` indicated how many digits should appear after the decimal point (the default is 6). If `p` is 0, the decimal point is not displayed.
        3. `f`: Displays a floating-point number if "fixed decimal" format, without an exponent. `p` has the same meaning as for `e`.
        4. `g`: Displays a floating-point number is either exponential format or fixed decimal format, depending on the number's size. `p` indicates the maximum number of significant digits (not after the decimal point) to be displayed. Unlike the `f` conversion, the `g` conversion won't show trailing zeros. 
    - Optional Formatting: `%m.pX` or `%-m.pX`
        - `m`-> Minimum Field Width (the minimum number of characters to be "reserved" for that value insertion)
            - Positive `m` indicates "right justified" characters.
            - Negative `m` indicated "left justified" characters.
        - `.p` -> Precision of inserted value (rounding or added values for required length of actual value).
    - Ex. `printf("Whole Number: %d/n", i);`
        - `i` is an integer and is inserted at %d (conserion specifier) within the string.
    ```c
    /* Prints int and float values in various formats */
        #include <stdio.h>

        int main(void)
        {
            int i;
            float x;

            i = 40;
            x = 839.21f;

            printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
            printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
            
            return 0;
        }
    ```
    ```text
    |40|   40|40   |00040|
    |   839.210| 8.392e+02|839.21    |
    ```

