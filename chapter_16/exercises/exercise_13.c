/*
13.
Suppose that s is the following structure (point is a structure tag declared in Exercise 10):

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

If the value of shape_kind is RECTANGLE, the height and width members store the
dimensions of a rectangle. If the value of shape_kind is CIRCLE, the radius member
stores the radius of a circle. Indicate which of the following statements are legal, and show
how to repair the ones that aren’t:

(a) s.shape_kind = RECTANGLE;
    ANSWER: Legal, assuming RECTANGLE is defined as a constant.

(b) s.center.x = 10;    
    ANSWER: Legal.
    
(c) s.height = 25;
    ANSWER: Illegal. Should be s.u.rectangle.height = 25;

(d) s.u.rectangle.width = 8;
    ANSWER: Legal.

(e) s.u.circle = 5;
    ANSWER: Illegal. Should be s.u.circle.radius = 5;
    
(f) s.u.radius = 5;
    ANSWER: Illegal. Should be s.u.circle.radius = 5;
*/

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

