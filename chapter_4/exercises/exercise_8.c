/*
Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were replaced by (10 - (total % 10)) % 10?

ANSWER:
Yes — the program would still work correctly if you replace:

9 - ((total - 1) % 10)

with:

(10 - (total % 10)) % 10

Both formulas are trying to compute a number that makes the total “round up” to the next multiple of 10.

They both ensure the result is always a single digit from 0 to 9.

Key idea: remainder behavior

Let:

r = total % 10

So r is always between 0 and 9.

Now check the new formula:

(10 - r) % 10
Case 1: r = 0
(10 - 0) % 10 = 10 % 10 = 0
Case 2: r = 1..9

Example r = 3:

(10 - 3) % 10 = 7

So it works fine.

Why the % 10 is important

Without % 10, we could get 10 (which is invalid for UPC digits).

Example:

10 - 0 = 10   ❌ not allowed

But with % 10:

10 % 10 = 0   ✔ fixed
Conclusion

Yes, the replacement works because:

It produces the same correct digit as the original formula
The % 10 fixes the only problem case (when the result becomes 10)
Final result is always between 0 and 9

So the UPC program will still function correctly.
*/