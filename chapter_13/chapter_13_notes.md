# Chapter 13 - Strings

## 13.1 String Literals
- String Literal: Sequence of characters enclosed within double quotes.
    - Cannot be modified when created.
        - Cannot index and overwrite a character.

- Escape Sequences: String literals may contain the same escape sequences as characters constants.
- Continuing a String Literal:
    - Use `\` at the end of line to carry-on a string literal.
    ```c
            printf("When you come ta a fork in the road, take it.  \
            -- Yogi Berra");
    ```
    - When two or more string lterals are adjacent (separated only by white space), the compiler will join them into a single string.
    ```c
            printf("When you come to a fork in the road, take it.  "
                    "--Yogi Berra");
    ```
- Null Character: `'\0'` that is placed at the end of string literals in memory to signigy the end of a string.
    - Size: Byte whose bits are all 0.
    - Don't confuse the null character `'\0'` with the zero character `'0'`. The null character has the code 0; the zero character has a different code (48 in ASCII).
    ![alt_text](images/image1.png)