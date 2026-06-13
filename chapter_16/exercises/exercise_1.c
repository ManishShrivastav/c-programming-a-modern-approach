/*
1.
In the following declarations, the x and y structures have members named x and y:
struct { int x, y; } x;
struct { int x, y; } y;
Are these declarations legal on an individual basis? Could both declarations appear as
shown in a program? Justify your answer.

Answer:
Yes, both declarations are legal on an individual basis because they define two different structures with their own members. 
However, both declarations cannot appear as shown in a program because they would cause a naming conflict due to the fact 
that both structures have members named x and y.
*/