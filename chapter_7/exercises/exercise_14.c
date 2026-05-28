/*
14.
Does the following statement always compute the fractional part of f correctly (assuming
that f and frac_part are float variables)?
frac_part = f - (int) f;
If not, what’s the problem?

    ----> No, the statement could fail if the value of f is larger than the largest value of int.

*/