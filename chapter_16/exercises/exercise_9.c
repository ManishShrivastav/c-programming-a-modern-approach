/*
9.
Write the following functions. (The color structure is defined in Exercise 8.)

(a) struct color make_color(int red, int green, int blue);
Returns a color structure containing the specified red, green, and blue values. If any argu-
ment is less than zero, the corresponding member of the structure will contain zero instead.
If any argument is greater than 255, the corresponding member of the structure will contain
255.

(b) int getRed(struct color c); Returns the value of c’s red member.

(c) bool equal_color(struct color color1, struct color color2);
Returns true if the corresponding members of color1 and color2 are equal.

(d) struct color brighter(struct color c);
Returns a color structure that represents a brighter version of the color c. The structure is
identical to c, except that each member has been divided by 0.7 (with the result truncated to
an integer). However, there are three special cases: (1) If all members of c are zero, the
function returns a color whose members all have the value 3. (2) If any member of c is
greater than 0 but less than 3, it is replaced by 3 before the division by 0.7. (3) If dividing by
0.7 causes a member to exceed 255, it is reduced to 255.

(e) struct color darker(struct color c);
Returns a color structure that represents a darker version of the color c. The structure is
identical to c, except that each member has been multiplied by 0.7 (with the result truncated
to an integer).
*/

#include <stdbool.h>

struct color
{
    int red, green, blue;
};

// a)
struct color make_color(int red, int green, int blue)
{
    struct color c;

    c.red = red > 255 ? 255 : (red < 0 ? 0 : red);
    c.green = green > 255 ? 255 : (green < 0 ? 0 : green);
    c.blue = blue > 255 ? 255 : (blue < 0 ? 0: blue);
    
    return c;    
}

// b)
int getRed(struct color c)
{
    return c.red;
}

// c)
bool equal_color(struct color c1, struct color c2)
{
    return ((c1.red == c2.red) && (c1.green == c2.green) && (c1.blue == c2.blue));
}

// d)
struct color brighter(struct color c)
{
    struct color brighter_c;

    if (c.red == 0 && c.green == 0 && c.blue == 0)
    {
        brighter_c.red = brighter_c.green = brighter_c.blue = 3;
    }
    else
    {
        brighter_c.red = (c.red > 0 && c.red < 3) ? 3 : (int)(c.red / 0.7);
        brighter_c.green = (c.green > 0 && c.green < 3) ? 3 : (int)(c.green / 0.7);
        brighter_c.blue = (c.blue > 0 && c.blue < 3) ? 3 : (int)(c.blue / 0.7);

        if (brighter_c.red > 255)
            brighter_c.red = 255;
        if (brighter_c.green > 255)
            brighter_c.green = 255;
        if (brighter_c.blue > 255)
            brighter_c.blue = 255;
    }

    return brighter_c;   
}

// e)
struct color darker(struct color c)
{
    struct color darker_c;

    darker_c.red = (int)(c.red * 0.7);
    darker_c.green = (int)(c.green * 0.7);
    darker_c.blue = (int)(c.blue * 0.7);

    return darker_c;   
}