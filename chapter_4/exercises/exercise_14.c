/*
Supply parentheses to show how a C compiler would interpret each of the following expres-
sions.

(a) a * b - c * d + e
(b) a / b % c / d
(c) - a - b + c - + d
(d) a * - b / c - d

ANSWERS:

We apply C operator precedence and associativity:

* / % bind tighter than + -
* / % are left-associative
+ - are left-associative
unary - and unary + bind tighter than multiplicative operators
(a) a * b - c * d + e

First do multiplications, then left-to-right addition/subtraction:

((a * b) - (c * d)) + e


(b) a / b % c / d

* / % have same precedence and are left-associative, so evaluate left to right:

(((a / b) % c) / d)

(c) - a - b + c - + d

Unary operators first, then left-to-right + and -:

-a
-b
+d (just d)

So:

(((-a) - b) + c) - (+d)


(d) a * - b / c - d

Unary minus applies to b first, then * and / left-to-right, then -:

(((a * (-b)) / c) - d)

*/