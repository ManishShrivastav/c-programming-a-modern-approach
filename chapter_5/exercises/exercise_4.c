/*
Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
than, equal to, or greater than j, respectively.
*/

#include <stdio.h>

int main(void)
{
    int i, j, expression;
    printf("Enter a value for i: ");
    scanf("%d", &i);

    printf("Enter a value for j: ");
    scanf("%d", &j);

    expression = (i > j) - (i < j);
    printf("For values of i = %d and j = %d, the expression (i > j) - (i < j) evaluates to ", i, j);
    printf("%d", expression);

    return 0;
}