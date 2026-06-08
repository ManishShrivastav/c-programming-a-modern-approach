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

## 13.2 String Variables
- Strings as Arrays
    - Define string array lengths `n + 1` to leave room for the null character at the end.
        - Because the string characters are in an array we can index and modify the characters unlike a string literal.
        ```c
                char date1[8] = "June 14";
        ```
    - The compiler will put the characters from "June 14" in the `date1` array, then add a null character so that `date1` can be used as a string.

        ![alt_text](images/image2.png)
    - If the string intializer is too short for the amount of memory places in the array, the compiler will fill with null characters.
        
        ![alt_text](images/image3.png)
    If the string initializer is too long for the amount of memory places in the array, the compiler will fill the array up to its limits, leaving off the remainder of the string, however long.
        ![alt_text](images/image4.png)
    - You can omit the length in the declaration and the compiler will compute the amount of memory needed automatically.
        ```c
                char date4[] = "June 14";
        ```
    - Strings as Pointers:
        ```c
                char *date = "June 14";
        ```
        - This is a string literal and we cannot modify the index components like array strings.
