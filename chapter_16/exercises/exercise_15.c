/*
15.
(a) Declare a tag for an enumeration whose values represent the seven days of the week.

(b) Use typedef to define a name for the enumeration of part (a).
*/

// a)
enum week_days
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

// b)

typedef enum week_days Week_days;

    // OR
typedef enum
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} Week_days;