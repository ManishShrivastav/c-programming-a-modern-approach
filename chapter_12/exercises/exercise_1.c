/*
1.
Suppose that the following declarations are in effect:

int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1], *q = &a[5];

(a) What is the value of *(p+3)?                    ---> 14
(b) What is the value of *(q-3)?                    ---> 34
(c) What is the value of q - p?                     ---> 4
(d) Is the condition p < q true or false?           ---> 1 < 5 is true
(e) Is the condition *p < *q true or false?         ---> 15 < 2 is false

*/

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("*(p+3) = %d\n", *(p + 3));
    printf("*(q-3) = %d\n", *(q - 3));
    printf("q - p = %d\n", q - p);
    printf("p < q is %s\n", (p < q) ? "true" : "false");
    printf("*p < *q is %s\n", (*p < *q) ? "true" : "false");

    return 0;
}