/*
1. 
Section 15.1 listed several advantages of dividing a program into multiple source files.
(a) Describe several other advantages.

    - It allows for better organization of code, making it easier to navigate and maintain.
    - It enables multiple developers to work on different parts of the program simultaneously without conflicts.
    - It can improve compilation times, as only the modified source files need to be recompiled, rather than the entire program.
    - It promotes code reuse, as common functions or classes can be placed in separate files and included in multiple projects.



(b) Describe some disadvantages.

    - It can introduce complexity in managing dependencies between source files, especially if there are circular dependencies.
    - It may require additional effort to set up the build system to compile and link multiple source files correctly.
    - It can make debugging more difficult, as the code is spread across multiple files, requiring developers to navigate through them to find the source of an issue.
    - It may lead to issues with name conflicts if not properly managed, especially in larger projects where multiple developers are contributing code.
*/