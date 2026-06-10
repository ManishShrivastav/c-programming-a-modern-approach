/*
5.
Let TOUPPER be the following macro:
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
Let s be a string and let i be an int variable. Show the output produced by each of the fol-
lowing program fragments.
(a) strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i]));

    The check starts from i = 1 because of s[++i]. 
    The final output is 'D' because s[++i] is 'd' and TOUPPER('d') is 'D'.
    
    But remember: in real C, this is undefined behavior because i is modified 
    multiple times within the same expression without sequencing. The compiler 
    is not required to produce D.


(b) strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i]));

    The check starts from i = 1 because of s[++i]. 
    The final output is '3' because s[++i] is '3' and TOUPPER('3') is '3' since 
    it's not a lowercase letter.
*/