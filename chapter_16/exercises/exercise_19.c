/*
19.
Declare a structure with the following members whose tag is pinball_machine:
name – a string of up to 40 characters
year – an integer (representing the year of manufacture)
type – an enumeration with the values EM (electromechanical) and SS (solid state)
players – an integer (representing the maximum number of players)
*/

struct pinball_machine {
    char name[41]; // String of up to 40 characters + null terminator
    int year; // Year of manufacture
    enum { EM, SS } type; // Enumeration for machine type
    int players; // Maximum number of players
};