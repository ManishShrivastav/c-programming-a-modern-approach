/*
7.
Let GENERIC_MAX be the following macro:
#define GENERIC_MAX(type)           \
type type##_max(type x, type y)     \
{                                   \
    return x > y ? x : y;           \
}

(a) Show the preprocessor’s expansion of GENERIC_MAX(long).

    The preprocessor will replace GENERIC_MAX(long) with the following code:

        long long_max(long x, long y)
        {
            return x > y ? x : y;
        }

(b) Explain why GENERIC_MAX doesn’t work for basic types such as unsigned long.

    GENERIC_MAX doesn’t work for basic types such as unsigned long because the macro 
    generates a function name by concatenating the type with "_max". For unsigned long, 
    the generated function name would be "unsigned long_max", which is not a valid 
    identifier in C. The space in "unsigned long" causes a syntax error when the 
    preprocessor tries to create the function name.


(c) Describe a technique that would allow us to use GENERIC_MAX with basic types such
as unsigned long. Hint: Don’t change the definition of GENERIC_MAX.

    One technique to allow us to use GENERIC_MAX with basic types such as unsigned 
    long is to define a typedef for the unsigned long type. For example, we can 
    create a typedef called "ulong" for unsigned long:

        typedef unsigned long ulong;

    Then, we can use GENERIC_MAX with the new typedef:

        GENERIC_MAX(ulong)

    This way, the preprocessor will generate a valid function name "ulong_max" for 
    the unsigned long type, allowing us to use the macro without changing its definition.

        ulong ulong_max(ulong x, ulong y)
        {
            return x > y ? x : y;
        }
*/
