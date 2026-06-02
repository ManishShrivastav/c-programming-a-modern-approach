/*
2.
The following program outline shows only function definitions and variable declarations.

    int b, c;

    void f(void)
    {
        int b, d;
    }

    void g(int a)
    {
        int c;
        {
            int a, d;
        }
    }

    int main(void)
    {
        int c, d;
    }

For each of the following scopes, list all variable and parameter names visible in that scope.
If there’s more than one variable or parameter with the same name, indicate which one is
visible.
(a) The f function                                  
(b) The g function
(c) The block in which a and d are declared
(d) The main function
*/



/*

SOLUTION:

================================================================================

(a) f function

b (local to f) (shadows file scope b)
c (file scope) 
d (local to f)

================================================================================

(b) g function

a (parameter of g)
b (file scope)
c (local to g)

================================================================================

(c) Inner block of g

a (inner block)
b (file scope)
c (local to g)
d (inner block)

================================================================================

(d) main function

b (file scope)
c (local to main)
d (local to main)

*/
