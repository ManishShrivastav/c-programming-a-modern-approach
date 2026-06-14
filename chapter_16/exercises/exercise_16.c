/*
16.
Which of the following statements about enumeration constants are true?

(a) An enumeration constant may represent any integer specified by the programmer.
    ANSWER: 
        True. Enumeration constants can be assigned any integer value by the programmer.

(b) Enumeration constants have exactly the same properties as constants created using #define.
    ANSWER: 
        False. Enumeration constants are part of an enumeration type and have a specific type, 
        while constants created using #define are preprocessor macros and do not have a type.

(c) Enumeration constants have the values 0, 1, 2, ... by default.
    ANSWER: 
        True. By default, the first enumeration constant is assigned the value 0, and each 
        subsequent constant is assigned the next integer value (1, 2, etc.) unless explicitly specified otherwise.

(d) All constants in an enumeration must have different values.
    ANSWER: 
        False. Enumeration constants can have the same value if explicitly assigned by the programmer. 
        However, it is generally recommended to have unique values for clarity and to avoid confusion.

(e) Enumeration constants may be used as integers in expressions.
    ANSWER: 
        True. Enumeration constants can be used as integers in expressions, as they are essentially integer values.
*/