# Chapter 11 - Pointers


## 11.1 Pointer Variables

- Byte: Main memory id divided into *bytes*, with each byte capable of storing eight bits of information.
    - Each byte has a unique memory address to distinguish it from other bytes in memory.
- Address: Variables can occupy one or more bytes in memory depending on type. The *address* of a variable is the address of the first byte the variable occupies.

    ![alt text](images/image.png)

- Pointer Variables: Specific variables used to house pointer memory addresses of other "variable" types.
    ![alt text](images/image1.png)

    - Declaring: `int *p`: --> p is a pointer variable capable of pointing to objects of type int.
        - Can appear in declarations with other variables of same *referenced* type: `int i, j, a[10], b[20], *p, *q;`
        ```c
            int *p;         /* points only to integers      */
            double *q;      /* points only to doubles       */
            char *r;        /* points only to characters    */
        ```
        
## 11.2 The Address and Indirection


## 11.3 Pointer Assignment


## 11.4 Pointers as Arguments


## 11.5 Pointers as Return Values
