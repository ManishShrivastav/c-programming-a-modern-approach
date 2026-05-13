/*
Write a program that declares several int and float variables—without initializing
them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)
*/

#include <stdio.h>

int main(void) {
    int age, num_of_samples, no_of_students;
    float amount, weight, height;

    printf("Uninitialized int variables: %d %d %d\n", age, num_of_samples, no_of_students);
    printf("Uninitialized float variables: %f %f %f\n", amount, weight, height);

    return 0;
}

/*
When running this program, you will see that the values of the uninitialized variables are unpredictable
and can vary each time you run the program. This is because they contain whatever data happens to be at 
that memory location, which is often referred to as "garbage values." There is no pattern to these values, 
and they can be different on each execution of the program. It is important to always initialize variables 
before using them to avoid such unpredictable behavior.
*/