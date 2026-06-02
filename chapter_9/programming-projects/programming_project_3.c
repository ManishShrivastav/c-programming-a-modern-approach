/*
3.
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
main first calls generate_random_walk, which initializes the array to contain '.'
characters and then replaces some of these characters by the letters A through Z, as
described in the original project. main then calls print_array to display the array on
the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char walk[10][10];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    int row = 0, col = 0;
    int direction;
    int tried[4];
    int attempts;
    int moved;
    int i, j;
    char letter = 'A';

    srand((unsigned) time(NULL));

    /* Initialize array with '.' */
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            walk[i][j] = '.';

    walk[row][col] = letter++;

    while (letter <= 'Z') {

        tried[0] = tried[1] = tried[2] = tried[3] = 0;
        attempts = 0;
        moved = 0;

        while (attempts < 4 && !moved) {

            direction = rand() % 4;

            if (tried[direction])
                continue;

            tried[direction] = 1;
            attempts++;

            switch (direction) {

                case 0:     /* up */
                    if (row > 0 &&
                        walk[row - 1][col] == '.') {
                        row--;
                        moved = 1;
                    }
                    break;

                case 1:     /* right */
                    if (col < 9 &&
                        walk[row][col + 1] == '.') {
                        col++;
                        moved = 1;
                    }
                    break;

                case 2:     /* down */
                    if (row < 9 &&
                        walk[row + 1][col] == '.') {
                        row++;
                        moved = 1;
                    }
                    break;

                case 3:     /* left */
                    if (col > 0 &&
                        walk[row][col - 1] == '.') {
                        col--;
                        moved = 1;
                    }
                    break;
            }
        }

        if (!moved)
            break;

        walk[row][col] = letter++;
    }
}

void print_array(char walk[10][10])
{
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++)
            printf("%c ", walk[i][j]);

        printf("\n");
    }
}