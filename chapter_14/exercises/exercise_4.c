/*
4.
For each of the following macros, give an example that illustrates a problem with the macro
and show how to fix it.
(a) #define AVG(x,y) (x+y)/2
(b) #define AREA(x,y) (x)*(y)
*/

/*

 a) #define AVG(x, y) (x+y)/2
 Problem: No parentheses around the replacement-list, hence this
 may have wrong results if AVG is used as a denominator
 
 Example: 6.0 / AVG(3, 3) = 6.0 / (3 + 3) / 2 = 6.0 / 6 / 2
 = 1.0 / 2 = 0.5 (But the desired is 2)
 
 Fix: Put parentheses around the replacement-list if it has an operator
 
 Correct Macro:
 #define AVG(x, y) ((x+y) / 2)
 
 
 b) #define AREA(x, y) (x) * (y)
 Problem: No parentheses around the replacement-list, hence this
 may have wrong results if AVG is used as a denominator
 
 Example: 24 / AREA(3, 4) = 24 / 3 * 4 = 8 * 4 = 32. Expectation was 2
 
 Fix: Put parentheses around the replacement-list if it has an operator
 
 Correct Macro:
 #define AREA(x, y) ((x) * (y))
 
 */