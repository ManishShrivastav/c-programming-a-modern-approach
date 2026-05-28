/*
15.
Use typedef to create types named Int8, Int16, and Int32. Define the types so that
they represent 8-bit, 16-bit, and 32-bit integers on your machine.

---->
        typedef char Int8;    char uses 1 byte (8 bits) of memory
        typedef short Int16;  short uses 2 bytes (16 bits) of memory
        typedef int Int32;    int uses 4 bytes (32 bits) of memory

        For true protability, the correct way is
        
            #include <stdint.h>
            typedef int8_t  Int8;
            typedef int16_t Int16;
            typedef int32_t Int32;
*/