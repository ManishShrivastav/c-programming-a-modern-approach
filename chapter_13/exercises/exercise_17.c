/*
17.
Write the following function:

bool test_extension(const char *file_name, const char *extension);

file_name points to a string containing a file name. The function should return true if
the file’s extension matches the string pointed to by extension, ignoring the case of let-
ters. For example, the call test_extension("memo.txt", "TXT") would return
true. Incorporate the “search for the end of a string” idiom into your function. Hint: Use
the toupper function to convert characters to upper-case before comparing them.
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension)
{
    const char *p = file_name;
    const char *ext;

    // move p to end of string
    while (*p != '\0')
        p++;

    // move backward until '.' or start of string
    while (p > file_name && *p != '.')
        p--;

    // if no dot found, no extension
    if (*p != '.')
        return false;

    ext = p + 1;  // start of extension

    // compare characters
    while (*ext != '\0' && *extension != '\0')
    {
        if (toupper(*ext) != toupper(*extension))
            return false;

        ext++;
        extension++;
    }

    // both must end at same time
    return *ext == '\0' && *extension == '\0';
}

int main(void)
{
    // Test cases
    printf("%d\n", test_extension("memo.txt", "TXT")); // should print 1 (true)
    printf("%d\n", test_extension("report.pdf", "pdf")); // should print 1 (true)
    printf("%d\n", test_extension("image.jpeg", "JPEG")); // should print 1 (true)
    printf("%d\n", test_extension("archive.zip", "ZIP")); // should print 1 (true)
    printf("%d\n", test_extension("document.docx", "DOCX")); // should print 1 (true)
    printf("%d\n", test_extension("notes.txt", "doc")); // should print 0 (false)
    printf("%d\n", test_extension("presentation.pptx", "ppt")); // should print 0 (false)
    printf("%d\n", test_extension("data.csv", "CSVX")); // should print 0 (false)
    printf("%d\n", test_extension("script.py", "PY")); // should print 1 (true)
    printf("%d\n", test_extension("archive.tar.gz", "gz")); // should print 1 (true)

    return 0;
}