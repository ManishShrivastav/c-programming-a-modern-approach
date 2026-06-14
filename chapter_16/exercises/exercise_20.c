/*
20.
Suppose that the direction variable is declared in the following way:
enum {NORTH, SOUTH, EAST, WEST} direction;

Let x and y be int variables. Write a switch statement that tests the value of direc-
tion, incrementing x if direction is EAST, decrementing x if direction is WEST,
incrementing y if direction is SOUTH, and decrementing y if direction is NORTH.
*/

#include <stdio.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
    int x = 0, y = 0;

    printf("Enter direction (0 for NORTH, 1 for SOUTH, 2 for EAST, 3 for WEST): ");
    scanf("%d", &direction);

    switch (direction) {
        case NORTH:
            y--;
            break;
        case SOUTH:
            y++;
            break;
        case EAST:
            x++;
            break;
        case WEST:
            x--;
            break;
        default:
            printf("Invalid direction.\n");
            return 1;
    }

    printf("New coordinates: (%d, %d)\n", x, y);
    return 0;
}