/*
10.
The following function supposedly creates an identical copy of a string. What’s wrong with
the function?
    char *duplicate(const char *p)
    {
    char *q;
    strcpy(q, p);
    return q;
    }

    ===========>
        The function has a critical issue: it attempts to copy the string pointed to by 'p' into 'q' without allocating memory for 'q'. 
        This leads to undefined behavior because 'q' is an uninitialized pointer that does not point to a valid memory location. 
        To fix this, you need to allocate memory for 'q' before using it to store the copied string. Here's a corrected version of the function:

            char *duplicate(const char *p)
            {
            char *q = malloc(strlen(p) + 1); // Allocate memory for the duplicate
            if (q != NULL) { // Check if memory allocation was successful
                strcpy(q, p); // Copy the string into the allocated memory
            }
            return q; // Return the pointer to the duplicated string
            }   

*/



