/*
7.
Suppose that str is an array of characters. Which one of the following statements is not
equivalent to the other three?
(a) *str = 0;               ---> This statement sets the first character of the string to the null terminator, effectively making it an empty string.
(b) str[0] = '\0';          ---> This statement also sets the first character of the string to the null terminator, achieving the same result as (a).
(c) strcpy(str, "");        ---> This statement copies an empty string into str, which also results in str being an empty string.
(d) strcat(str, "");        ---> This statement concatenates an empty string to str, which does not change the contents of str. 
                                 If str was not already an empty string, it will remain unchanged, making this statement not equivalent to the other three.
*/