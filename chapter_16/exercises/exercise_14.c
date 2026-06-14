/*
14.
Let shape be the structure tag declared in Exercise 13. Write functions that perform the
following operations on a shape structure s passed as an argument:

(a) Compute the area of s.

(b) Move s by x units in the x direction and y units in the y direction, returning the modi-
fied version of s. (x and y are additional arguments to the function.)

(c) Scale s by a factor of c (a double value), returning the modified version of s. (c is an
additional argument to the function.)
*/

#include <stdio.h>

enum { RECTANGLE, CIRCLE };

struct point
{
    int x, y;
};

struct shape {
    int shape_kind;             // RECTANGLE or CIRCLE 
    struct point center;        // coordinates of center 
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

// a)
double area(struct shape s)
{
    if (s.shape_kind == RECTANGLE) 
        return s.u.rectangle.height * s.u.rectangle.width;
    else if (s.shape_kind == CIRCLE) 
        return 3.14159 * s.u.circle.radius * s.u.circle.radius;
    else
        return -1; // Invalid shape_kind
}

// b)
struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    
    return s;    
}

// c)
struct shape scale(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.height = (int)(s.u.rectangle.height * c);
        s.u.rectangle.width = (int)(s.u.rectangle.width * c);
    }
    else if (s.shape_kind == CIRCLE)
    {
        s.u.circle.radius = (int)(s.u.circle.radius * c);
    }
    return s;
}