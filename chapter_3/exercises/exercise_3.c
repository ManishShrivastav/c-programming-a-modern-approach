/*
For each of the following pairs of scanf format strings, indicate whether or not the two
strings are equivalent. If they’re not, show how they can be distinguished.
(a) "%d"            versus      " %d"
    --->> Equivalent.

                Both accept inputs like:
                                        123
                                        123
                                        \n\t123
                because %d automatically skips leading whitespace.


(b) "%d-%d-%d"      versus      "%d -%d -%d"
    --->>Not equivalent.
                The spaces in the second format string allow optional whitespace before the literal -.

                First format
                "%d-%d-%d"

                requires the input characters to appear exactly like:

                12-34-56
                Second format
                "%d -%d -%d"

                allows whitespace before each -, such as:

                12 -34 -56
                12    -34    -56

                So these can be distinguished by input containing spaces before -.

(c) "%f"            versus      "%f "
    --->>Not equivalent.

                The trailing space in: "%f "

                tells scanf to keep consuming whitespace after the float and then wait for the next non-whitespace character.

                So:
                scanf("%f", &x);
                can finish immediately after reading:
                3.14

                But:
                scanf("%f ", &x);
                may appear to “hang” waiting for another non-whitespace character after you press Enter.


(d) "%f,%f"         versus      "%f, %f"
    --->>Equivalent.

                The space in a scanf format matches any amount of whitespace, including none.

                So both accept:

                1.0,2.0
                1.0, 2.0
                1.0,      2.0

                The second format is just more permissive about whitespace after the comma.
*/

# include <stdio.h>

int main(void)
{
    int i, j, k;
    printf("Enter value: ");
    scanf("%d -%d -%d", &i, &j, &k);
    printf("%d-%d-%d", i, j, k);
    return 0;
}

