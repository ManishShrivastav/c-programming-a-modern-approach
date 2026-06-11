/*
3.
We saw that writing #include <file> instead of #include "file" may not work if file is
one that we’ve written. Would there be any problem with writing #include "file" instead
of #include <file> if file is a system header?

    -> Yes and no.

    ->  Yes, because the compiler will first look for the file in the current directory and then in the system directories. 
      If there is a file with the same name in the current directory, it will be included instead of the system header, 
      which can lead to unexpected behavior.

    ->  No, because if there is no file with the same name in the current directory, the compiler will look for the file 
      in the system directories and include it without any issues.
*/