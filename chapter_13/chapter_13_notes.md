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

## 13.3 Reading and Writing Strings
- Writing Strings using `printf` and `puts`
    - `printf`
        ```c
                char str[] = "Are we having fun yet?";

                printf("%s\n", str);
            
            The output will be:
                Are we having fun yet?
        ```
        - Print only a slice: `%.ps` where `p` is the number of characters to be displayed.
            ```c
                    printf("%.6s\n", str);
                
                Will print: "Are we"
            ```
        - Print a string within a field with `%ms` where `m` is the field size. A string with more than `m` characters will be printed in full NOT truncated!

            - In C, strings can be formatted using the `%s` conversion specification in `printf()`. You can control:

            * **Field width** (minimum number of characters to occupy)
            * **Justification** (left or right alignment)
            * **Precision** (maximum number of characters to display)


            - `%ms` — Minimum Field Width: The format `%ms` displays a string in a field of width `m`.

                - ### Example

                    ```c
                    char str[] = "Programming";

                    printf("%15s\n", str);
                    ```

                    ### Output

                    ```text
                        Programming
                    ```

                    ### Explanation

                    * `"Programming"` contains 11 characters.
                    * The field width is 15.
                    * Since the string is shorter than the field width, 4 spaces are added before the string.
                    * The string is **right-justified** by default.


            - `%-ms` — Left Justification: Adding a minus sign (`-`) before the width causes the string to be left-justified.

                - ### Example

                    ```c
                    char str[] = "Programming";

                    printf("%-15s\n", str);
                    ```

                    ### Output

                    ```text
                    Programming    
                    ```

                    ### Explanation

                    * The string is printed starting at the left side of the field.
                    * Remaining spaces are added after the string.


            - String Longer Than Field Width: A field width specifies the **minimum** width, not the maximum.

                - ### Example

                    ```c
                    char str[] = "Programming";

                    printf("%5s\n", str);
                    ```

                    ### Output

                    ```text
                    Programming
                    ```

                    ### Explanation

                    * The string has 11 characters.
                    * The field width is only 5.
                    * The entire string is printed.
                    * Strings are **not truncated** when they exceed the field width.


        - `%m.ps` — Width and Precision Combined

            The format `%m.ps`:

            * Prints only the first `p` characters of the string.
            * Places the result in a field of width `m`.

            - ### Example

            ```c
            char str[] = "Programming";

            printf("%15.4s\n", str);
            ```

            ### Output

            ```text
                    Prog
            ```

            ### Explanation

            * `.4` limits output to the first 4 characters (`Prog`).
            * `15` specifies a field width of 15.
            * Since `Prog` is 4 characters long, 11 leading spaces are added.


        - `%-m.ps` — Left-Justified Width and Precision

            - ### Example

            ```c
            char str[] = "Programming";

            printf("%-15.4s\n", str);
            ```

            ### Output

            ```text
            Prog           
            ```

            ### Explanation

            * Only the first 4 characters are displayed.
            * The result occupies a field of width 15.
            * The minus sign (`-`) causes left justification.

            # Additional Examples

            ```c
            char str[] = "Computer";

            printf("|%10s|\n", str);
            printf("|%-10s|\n", str);
            printf("|%10.3s|\n", str);
            printf("|%-10.3s|\n", str);
            ```

            ### Output

            ```text
                |  Computer|
                |Computer  |
                |       Com|
                |Com       |
            ```
    - `puts`: Only has one argument, the string to be printed. After writing the string `puts` always writes an additional new-line character.
        ```c
                puts(str);
        ```

- Reading Strings using `scanf` and `gets`:
    - `scanf`:
        ```c
                scanf("%s", str);
        ```
        - Skips whitespace then reads characters and stores them in `str` until it encounters a white-space character.
        - Always stores a null character at the end of the string.
        - A string reading using `scanf` will NEVER contain whitespace.
        - New-line character will cause `scanf` to stop reading, but so will a space or a tab character.
    
    - `gets`:
        - Stores a null character at the end of a read string.
        - Does not skip white sapce before starting to read the string.
        - Reads until it finds a new-line character.
        - Discards the new-line character instead of storing it in the array, a null character takes its place.

## 13.4 Accessing the Characters in a String
- Since strings are stored as arrays, we can use subscripting to access the characters in a string.
    ```c
            int count_spaces(const char s[])
            {
                int count = 0, i;

                for (i = 0; s[i] != '\0'; i++)
                {
                    if (s[i] == ' ')
                    {
                        count++;
                    }
                }
                return count;
            }
    ```    

- More common to use a `pointer` to string start:
    ```c
            int count_spaces(const char *s)
            {
                int count = 0;

                for (; *s != '\0'; s++)
                {
                    if (*s == ' ')
                    {
                        count++;
                    }
                }
                return count;
            }
    ```

## 13.5 Using the C String Library
- Functions found in `<string.h>`
    - String Copy `strcpy`:
        ```c
                char *strcpy(char *s1, const char *s2);
        ```
        - Copies the string `s2` into the string `s1` (To be precise, we should say " copies the string pointed to by `s2` into the array pointed to by `s1`). i.e., copies characters from `s2` to `s1` up to and including the first null character in `s2`.
        - Returns `s1` (a pointer to the destination string). The string pointed to by `s2` isn't modified, so it's declared `const`.
    - String N Copy `strncpy`:
        ```c
                strncpy(str1, str2, sizeof(str1));
        ```
        - Calling the `strncpy` function is a safer, albeit slower way to copy a string.
        - Has a third argument that limits the number of characters that will be copied.
    - String Length `strlen`:
        ```c
                size_t strlen(const char *s);
        ```
        - `size_t`: represents one of C's unsigned integer types.
        - Returns the length of a string: the number of characters in `s` up to, but not including, the first `null` character.
            ```c
                    int len;

                    len = strlen("abc");    /* len is now 3 */
                    len = strlen("");       /* len is now 0 */
                    strcpy(str1, "abc");    
                    len = strlen("str1");    /* len is now 3 */
            ```
    - String Concatenation `strcat`:
        ```c
                char *strcat(char *s1, const char *s2);
        ```
        - Appends the contents of the string `s2` to the end of the string `s1`; it returns `s1` (a pointer to the resulting string).
            ```c
                    strcpy(str1, "abc");
                    strcat(str1, "def");    /*  str1 now contains "abcdef"   */
            ```
    - String N Concatenation `strncat`:
        ```c
                strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
        ```
        - Safer but slower version of `strcat`.
        - Has a third argument that limits the number of characters it will copy.
    
    - String Comparison Function `strcmp`:
        ```c
                int strcmp(const char *s1, const char *s2);
        ```
        - Compares the strings `s1` and `s2`, returning a value less than, equal to, or greater than 0, depending on whether `s1` is less than, equal to, or greater than `s2`.
        ```c
                if (strcmp(str1, str2) < 0)     /*  is str1 < str2? */
            or
                if (strcmp(str1, str2) <= 0)    /* is str1 <= str2? */
        ```
        - Compares strings based on their lexicographical ordering.
            - The first i characters of `s1` and `s2` match, but the (i+1)st character of s1 is less than the (i+1)st character of `s2`. For example, "abc" is less than "bcd", and "abd" is less than "abe".
            - All characters of s1 match s2, but s1 is shorter than s2. For example,"abc" is less than "abcd".
            - The characters in each of the sequences `A–Z, a–z, and 0–9` have consecutive codes.
            - All upper-case letters are less than all lower-case letters. (In ASCII, codes between 65 and 90 represent upper-case letters; codes between 97 and 122 represent lower-case letters.)
            - Digits are less than letters. (Codes between 48 and 57 represent digits.)
            - Spaces are less than all printing characters. (The space character has the value 32 in ASCII.)
                    

## 13.6 String Idioms


        