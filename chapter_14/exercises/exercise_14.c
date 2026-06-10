/*
14.
Show what the following program will look like after preprocessing. Some lines of the pro-
gram may cause compilation errors; find all such errors.

    #define N = 10
    #define INC(x) x+1
    #define SUB (x,y) x-y
    #define SQR(x) ((x)*(x))
    #define CUBE(x) (SQR(x)*(x))
    #define M1(x,y) x##y
    #define M2(x,y) #x #y
    int main(void)
    {
    int a[N], i, j, k, m;
    #ifdef N
    i = j;
    #else
    j = i;
    #endif
    i = 10 * INC(j);
    i = SUB(j, k);
    i = SQR(SQR(j));
    i = CUBE(j);
    i = M1(j, k);
    puts(M2(i, j));
    #undef SQR
    i = SQR(j);
    #define SQR
    i = SQR(j);
    return 0;
    }
*/

#define N = 10              // error: invalid initializer
#define INC(x) (x+1)        // error: missing parentheses around argument in macro invocation
#define SUB (x,y) (x-y)     // error: missing parentheses around argument in macro invocation
#define SQR(x) ((x)*(x))    
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y        
#define M2(x,y) #x #y
int main(void)
{
int a[N], i, j, k, m;       // error: array size missing in 'a' declaration
#ifdef N
i = j;
#else
j = i;
#endif
i = 10 * INC(j);
i = SUB(j, k);          // error: 'SUB' is not a function-like macro
i = SQR(SQR(j));
i = CUBE(j);
i = M1(j, k);           // error: 'M1' is not a function-like macro
puts(M2(i, j));
#undef SQR
i = SQR(j);
#define SQR
i = SQR(j);
return 0;
}
