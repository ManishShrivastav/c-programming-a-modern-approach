/*
Only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it?
Justify your answer.

My ANSWER guess is ++i.

Only ++i is exactly the same as (i += 1).

Reason:

(i += 1) first increases the value of i by 1 and then uses the new value of i as the result of the expression.

++i (pre-increment) does the same thing. It increases i by 1 first and then evaluates to the new value.

So both ++i and (i += 1) increment i and immediately produce the updated value.

On the other hand, i++ is different. It first gives the old value of i, and only after that does it increase i by 1.

For example, if i = 5:

i += 1 makes i become 6 and evaluates to 6
++i also makes i become 6 and evaluates to 6
i++ evaluates to 5, then increases i to 6

So only ++i matches (i += 1) exactly.
*/