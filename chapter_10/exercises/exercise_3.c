/*
3.
Suppose that a program has only one function (main). How many different variables named
i could this program contain?
*/



// ===============================================================
/*
The answer is there is no fixed limit (ignoring implementation limits such as available memory or compiler restrictions).

In C, you can declare a new variable named i in each nested block, and each inner declaration hides the outer one:

int main(void)
{
    int i;      // #1 

    {
        int i;  // i #2

        {
            int i;  // i #3

            {
                int i;  // i #4
            }
        }
    }

    return 0;
}

Each of these is a different variable with its own scope.

Since C allows blocks to be nested arbitrarily deeply, a program with only main can contain any number of different 
variables named i, limited only by practical compiler and memory constraints.

Answer: An unlimited number (subject only to implementation limits).

*/