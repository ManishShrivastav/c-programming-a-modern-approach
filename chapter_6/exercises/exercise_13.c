/*
*13.
Rewrite the following loop so that its body is empty:

    for (n = 0; m > 0; n++)
        m /= 2;

=======>

You can move the update m /= 2 into the third expression of the for loop, leaving the body empty:

for (n = 0; m > 0; n++, m /= 2)
    ;

Explanation:
    n = 0 initializes n
    m > 0 is the loop condition
    n++ and m /= 2 both happen after each iteration
    The body is an empty statement (;) since all work is done in the loop header

This preserves the original behavior exactly.
*/