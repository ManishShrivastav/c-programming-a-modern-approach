/*
3.
Let DOUBLE be the following macro:
#define DOUBLE(x) 2*x
(a) What is the value of DOUBLE(1+2)? 4
(b) What is the value of 4/DOUBLE(2)? 1
(c) Fix the definition of DOUBLE. #define DOUBLE(x) (2*(x))
*/

#include <stdio.h>

#define DOUBLE(x) (2*x)

int main(void)
{
    printf("The value of DOUBLE(1+2) is %d\n", DOUBLE(1+2));
    printf("The value of 4/DOUBLE(2) is %d\n", 4/DOUBLE(2));
    return 0;
}

/*
The value of DOUBLE(1+2) is 4 (because the macro expands to 2*1+2, which is evaluated as (2*1)+2 = 4)
The value of 4/DOUBLE(2) is 1 (because the macro expands to 4/(2*2), which is evaluated as 4/4 = 1)
*/