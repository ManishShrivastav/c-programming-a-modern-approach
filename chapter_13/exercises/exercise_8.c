/*
8.
What will be the value of the string str after the following statements have been executed?
strcpy(str, "tire-bouchon");        ---> This statement copies the string "tire-bouchon" into the array str. After this statement, str will contain "tire-bouchon".
strcpy(&str[4], "d-or-wi");         ---> This statement copies the string "d-or-wi" into the array str starting at index 4. After this statement, str will contain "tire-d-or-wi".
strcat(str, "red?");                ---> This statement concatenates the string "red?" to the end of the current contents of str. After this statement, str will contain "tire-d-or-wired?".

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[50]; // Ensure the array is large enough to hold the resulting string

    strcpy(str, "tire-bouchon");
    printf("After first strcpy: %s\n", str); // Output: tire-bouchon

    strcpy(&str[4], "d-or-wi");
    printf("After second strcpy: %s\n", str); // Output: tire-d-or-wi

    strcat(str, "red?");
    printf("After strcat: %s\n", str); // Output: tire-d-or-wired?

    return 0;
}