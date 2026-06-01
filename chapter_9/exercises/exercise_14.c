/*
14.
The following function is supposed to return true if any element of the array a has the
value 0 and false if all elements are nonzero. Sadly, it contains an error. Find the error and
show how to fix it:

    bool has_zero(int a[], int n)
    {
    int i;
    for (i = 0; i < n; i++)
    if (a[i] == 0)
        return true;
    else
        return false;
    }


--->        The error is that the function returns false too soon. During the first iteration of the loop, 
            if the first element is not 0, the function immediately returns false and stops checking the rest of the array.

            For example, if the array is:

            {5, 0, 7}

            the function checks the first element (5). Since 5 is not 0, it executes:

            return false;

            and exits the function without ever checking the second element, which is 0.

            The function should only return false after it has checked every element in the array and confirmed that none of them are 0.

            A correct version is:

            bool has_zero(int a[], int n)
            {
            int i;

            for (i = 0; i < n; i++)
                if (a[i] == 0)
                    return true;

            return false;

            }

            This version returns true as soon as it finds a 0. If the loop finishes without finding any 0s, it returns false.

            A break statement is not needed because return already exits the function immediately.
*/
