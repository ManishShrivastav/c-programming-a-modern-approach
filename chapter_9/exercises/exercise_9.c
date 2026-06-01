/*
9.
What will be the output of the following program?

    #include <stdio.h>
    void swap(int a, int b);

    int main(void)
    {
        int i = 1, j = 2;
        swap(i, j);
        printf("i = %d, j = %d\n", i, j);
        return 0;
    }
    void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

                ----> OUTPUT will be: i = 2, j = 1

                I was wrong, the output will be: i = 1, j = 2

                    The variables i and j are not swapped because C passes function arguments by value. When swap(i, j) is called, 
                    copies of i and j are passed to the function and stored in the parameters a and b.

                    Inside the swap function, only the copies a and b are exchanged. The original variables i and j in main remain unchanged.

                    Step by step:

                    i = 1 and j = 2 in main.
                    swap(i, j) passes copies of these values to a and b.
                    Inside swap:
                    temp = a (temp = 1)
                    a = b (a = 2)
                    b = temp (b = 1)
                    The function ends, and a, b, and temp are discarded.
                    i and j are still 1 and 2.

                    Therefore, the printf statement prints:

                    i = 1, j = 2

                    To actually swap i and j, the function would need to receive their addresses (using pointers) instead of copies of their values.
*/