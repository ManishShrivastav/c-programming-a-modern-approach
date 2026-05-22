/*
What output does the following program fragment produce? (Assume that i is an integer
variable.)
i = 1;
switch (i % 3) {
case 0: printf("zero");
case 1: printf("one");
case 2: printf("two");
}

--->    i = 1

        i % 3 = 1, so the switch becomes switch(1)

        Execution starts at case 1.

        Since there are no break statements, execution continues (falls through) to the next cases.

        case 1 prints "one"
        case 2 prints "two"

        Final output:
        onetwo
*/

#include <stdio.h>

int main(void)
{
    int i = 1;

    switch (i % 3) 
    {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }

}