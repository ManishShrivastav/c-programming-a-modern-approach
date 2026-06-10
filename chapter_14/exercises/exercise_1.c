/*
1.
Write parameterized macros that compute the following values.
(a) The cube of x.
(b) The remainder when n is divided by 4.
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Do your macros always work? If not, describe what arguments would make them fail.
*/

// a)

#define CUBE(x) ((x) * (x) * (x))

// b)

#define REMAINDER(n) ((n) % 4)

// c)

#define LESS_THAN_100(x, y) (((x) * (y)) < 100 ? 1 : 0)

// My macros may fail if the arguments passed to them have side effects or are 
// expressions that could lead to unintended consequences. For example, 
// if we use CUBE(x++) or CUBE(2 + 3), it would not work as expected because 
// the macro would expand to ((x++) * (x++) * (x++)) or ((2 + 3) * (2 + 3) * (2 + 3)), 
// which would lead to incorrect results. 

// Similarly, for REMAINDER(n), if we pass an expression like REMAINDER(10 + 5), it would expand to ((10 + 5) % 4), which is fine, 
// but if we pass something with side effects like REMAINDER(n++), it would lead to 
// unintended consequences. 

//For LESS_THAN_100(x, y), if we pass expressions with side effects like 
// LESS_THAN_100(x++, y++), it would also lead to unintended consequences.