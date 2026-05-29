/*
1.
We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the num-
ber of elements in an array. The expression sizeof(a) / sizeof(t), where t is the type
of a’s elements, would also work, but it’s considered an inferior technique. Why?

---->   
        The second expression may not necessarily reflect the type of a value in "a". 
        For example, if "a" was changed from an array of ints to an array of longs, then each instance of sizeof(t) would have to be changed.

*/