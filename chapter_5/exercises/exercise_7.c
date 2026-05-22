/*
What does the following statement print if i has the value 17? What does it print if i has the
value –17?
printf("%d\n", i >= 0 ? i : -i);

---> here if i is 17, the print is 17. i.e. i itself.
     but if i = -17, then the final print is -i, i.e. -(-17), which is essentially 17.
*/

#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a value for i: ");
    scanf("%d", &i);
    printf("%d\n", i >= 0 ? i : -i);
    return 0;
}