# Chapter 16 - Structures, Unions, and Enumerations

## 16.1 Structure Variables

- Structure Variables: A collection of elements or data types that do not have to be the same overall type and are grouped into a "container".
    - Members: Data objects found within structures.
    - Access members of a structure with a `.` operator.
    - Names declared in the scope of a structure are local to that structure.
    ```c
        struct
        {
            int number;
            char name[NAME_LEN + 1];
            int on_hand;
        } part1, part2;
    ```
    ![alt_text](images/image1.png)
    - `int` 4 byte
    - `NAME_LEN` 25 chars
- C99 Designated Initializer
    - Order doesn't matter
    - Undesignated values default to iniializer order.
        ```c
            {.number = 528, .name = "Disk drive", .on_hand = 10}
        ```
- Structure variables of the same type can be copied directly with `=`.
    - Even arrays within the structure are copied unlike arrays alone.



