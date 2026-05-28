/*
4.
If c is a variable of type char, which one of the following statements is illegal?
(a) i += c; // i has type int           ----> legal
(b) c = 2 * c - 1;                      ----> legal
(c) putchar(c);                         ----> legal (putchar() expects an int representing a character. Passing char is valid.)
(d) printf(c);                          ----> illegal (printf() expects the first argument to be a format string (char *), not a single char. eg.
                                                        printf("%c", c);
                                                        Here:
                                                            "%c" → format string (a string of type char *)
                                                            c → the character value to print)

*/