/*
13.
(a) Show what the following program will look like after preprocessing. You may ignore
any lines added to the program as a result of including the <stdio.h> header.

    #include <stdio.h>
    #define N 100
    void f(void);

    int main(void)
    {
        f();
    #ifdef N
    #undef N
    #endif
        return 0;
    }

    void f(void)
    {
    #if defined(N)
        printf("N is %d\n", N);
    #else
        printf("N is undefined\n");
    #endif
    }
================================================>
        *    #define N 100 is active at the start.
        *    Inside main, #ifdef N is true, so #undef N is included.
        *    After that point, N is no longer defined.
        *    When f() is compiled, N is undefined.

    So the preprocessed result (conceptually) becomes:
    #include <stdio.h>

    void f(void);

    int main(void)
    {
        f();
        return 0;
    }

    void f(void)
    {
        printf("N is undefined\n");
    }

(The #if defined(N) block collapses to the #else branch.)

==================================================>

(b) What will be the output of this program?

The output will be:
    Execution flow:

    main() calls f()
    By the time f() is compiled/executed, N has been undefined
    So f() prints: "N is undefined"

===================================================>

(a) After preprocessing, f() contains only:
    printf("N is undefined\n");

(b) Output:
    N is undefined
*/


