/*
1.
The following program outline shows only function definitions and variable declarations.

    int a;

    void f(int b)
    {
        int c;
    }

    void g(void)
    {
        int d;
        {
            int e;
        }
    }

    int main(void)
    {
        int f;
    }

For each of the following scopes, list all variable and parameter names visible in that scope:
(a) The f function                          ---> variables: a, c;       parameters: b
(b) The g function                          ---> variables: a, d;       parameters: none
(c) The block in which e is declared        ---> variables: a, d, e;    parameters: none
(d) The main function                       ---> variables: a, f;       parameters: none

*/