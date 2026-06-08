/*
11.
The Q&A section at the end of this chapter shows how the strcmp function might be writ-
ten using array subscripting. Modify the function to use pointer arithmetic instead.
*/

int strcmp(const char *s, const char *t)
{
    for (; *s == *t; s++, t++) {
        if (*s == '\0')
        {
            return 0;
        }
    }
    return *s - *t;
}

int main(void)
{
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    const char *str3 = "World";

    int result1 = strcmp(str1, str2); // Should return 0 (strings are equal)
    int result2 = strcmp(str1, str3); // Should return a negative value (str1 < str3)
    int result3 = strcmp(str3, str1); // Should return a positive value (str3 > str1)

    return 0;
}