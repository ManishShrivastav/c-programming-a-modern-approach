/*
15.
The following (rather confusing) function finds the median of three numbers. Rewrite the
function so that it has just one return statement.
    double median(double x, double y, double z)
    {
        if (x <= y)
            if (y <= z) return y;
            else if (x <= z) return z;
            else return x;
        if (z <= y) return y;
        if (x <= z) return x;
        return z;
    }
*/

#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("The median is %.2f\n", median(x, y, z));

    return 0;
}

double median(double x, double y, double z)
{
    double m;

    if ((x <= y && y <= z) || (z <= y && y <= x))
    {
        m = y;
    }
    else if ((y <= x && x <= z) || (z <= x && x <= y))
    {
        m = x;
    }
    else
    {
        m = z;
    }

    return m;
}