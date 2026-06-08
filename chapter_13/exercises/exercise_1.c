/*
1.
The following function calls supposedly write a single new-line character, but some are
incorrect. Identify which calls don’t work and explain why.

(a) printf("%c", '\n'); 
        ----> This call works correctly. It uses the %c format specifier to print a single character, and '\n' is a valid character 
    literal representing a new-line character.

(b) printf("%c", "\n"); 
        ----> This call does not work correctly. The %c format specifier expects a single character, but "\n" is a string literal 
    (an array of characters) rather than a single character. This will lead to undefined behavior.

(c) printf("%s", '\n');   
        ----> This call does not work correctly. The %s format specifier expects a string literal (an array of characters), but '\n' 
    is a character literal. This will lead to undefined behavior.

(d) printf("%s", "\n");    
        ----> This call works correctly. It uses the %s format specifier to print a string literal, and "\n" is a valid string literal
     representing a new-line character.

(e) printf('\n');    
        ----> This call does not work correctly. The printf function requires a format string as its first argument, but '\n' is a 
    character literal. This will lead to undefined behavior.

(f) printf("\n");    
        ----> This call works correctly. It uses the default format (no format specifiers) to print the string literal "\n", which 
    represents a new-line character.

(g) putchar('\n');    
        ----> This call works correctly. The putchar function is designed to print a single character, and '\n' is a valid character l
    iteral representing a new-line character.

(h) putchar("\n"); 
        ----> This call does not work correctly. The putchar function is designed to print a single character, but "\n" is a string 
    literal. This will lead to undefined behavior.

(i) puts('\n');     
        ----> This call does not work correctly. The puts function expects a string literal, but '\n' is a character literal. This will 
    lead to undefined behavior.

(j) puts("\n");        
        ----> This call works correctly. It uses the puts function to print the string literal "\n", which represents a new-line character.

(k) puts("");  
        ----> This call works correctly. It uses the puts function to print an empty string.
*/