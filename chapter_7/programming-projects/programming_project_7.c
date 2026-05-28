/*
7. Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply,
or divide two fractions (by entering either +, -, *, or / between the fractions).

CHAPTER 3 PROJECT 6
#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}


*/

#include <stdio.h>
int main(void)
{
    char op;
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a (+, -, *, /) sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &op, &num2, &denom2);

    switch (op)
    {
        case '+':        
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':        
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;        
        case '*':        
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;        
        case '/':        
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;     
        
        default:
            printf("Invalid operator \n");
            break;
    }
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}

