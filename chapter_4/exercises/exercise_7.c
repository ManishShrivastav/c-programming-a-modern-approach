/*
The algorithm for computing the UPC check digit ends with the following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
It’s tempting to try to simplify the algorithm by using these steps instead:
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.
Why doesn’t this technique work?

ANSWER:
The UPC method works in a special way that always keeps the final answer between 0 and 9.

The correct method does this:

First subtract 1 from the total
Then find the remainder when dividing by 10
Then subtract that remainder from 9

This always gives a single digit from 0 to 9.

The shortcut tries to do this instead:

Find total mod 10
Subtract that from 10

This seems similar, but it has a problem.

The problem happens when the total is exactly divisible by 10.

Example:

If total = 10

Correct method:

10 − 1 = 9
9 mod 10 = 9
9 − 9 = 0 (valid UPC digit)

Shortcut method:

10 mod 10 = 0
10 − 0 = 10 (NOT valid, because a UPC digit must be 0–9)

So the shortcut sometimes produces 10, which is not allowed in UPC codes.

That is why the shortcut does not always work.
*/