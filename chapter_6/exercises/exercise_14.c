/*
*14.
Find the error in the following program fragment and fix it.

    if (n % 2 == 0);
        printf("n is even\n");

======>

The error is the extra semicolon after the if condition:

if (n % 2 == 0);

That semicolon makes the if statement do nothing. So printf runs every time, regardless of whether n is even or odd.

Correct version:
if (n % 2 == 0)
    printf("n is even\n");

Why it matters
The semicolon ends the if statement immediately.
The printf becomes an independent statement, not controlled by the condition.

If you want to make it clearer (especially in larger code), you can also use braces:

if (n % 2 == 0) 
{
    printf("n is even\n");
}
*/