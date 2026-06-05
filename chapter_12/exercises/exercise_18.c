/*
18.
Write the evaluate_position function described in Exercise 13 of Chapter 9. Use
pointer arithmetic—not subscripting—to visit array elements. Use a single loop instead of
nested loops.

BELOW is Exercise 13 from Chapter 9 for reference:
13.
Write the following function, which evaluates a chess position:
int evaluate_position(char board[8][8]);
board represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N,
P represent White pieces, and the letters k, q, r, b, n, and p represent Black pieces.
evaluate_position should sum the values of the White pieces (Q = 9, R = 5, B = 3,
N = 3, P = 1). It should also sum the values of the Black pieces (done in a similar way). The
function will return the difference between the two numbers. This value will be positive if
White has an advantage in material and negative if Black has an advantage.


#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    int score = evaluate_position(board);
    printf("Position score: %d\n", score);

    return 0;
}

int evaluate_position(char board[8][8])
{
    int white_value = 0;
    int black_value = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char piece = board[i][j];
            switch (piece)
            {
                case 'Q': white_value += 9; break;
                case 'R': white_value += 5; break;
                case 'B': white_value += 3; break;
                case 'N': white_value += 3; break;
                case 'P': white_value += 1; break;
                case 'q': black_value += 9; break;
                case 'r': black_value += 5; break;
                case 'b': black_value += 3; break;
                case 'n': black_value += 3; break;
                case 'p': black_value += 1; break;
            }
        }
    }

    return white_value - black_value;
}
*/

#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    int score = evaluate_position(board);
    printf("Position score: %d\n", score);

    return 0;
}

int evaluate_position(char board[8][8])
{
    int white_value = 0;
    int black_value = 0;

    char *p = &board[0][0];
    char *end = p + 64;

    for (; p < end; p++) {
        switch (*p) {
            case 'Q': white_value += 9; break;
            case 'R': white_value += 5; break;
            case 'B': white_value += 3; break;
            case 'N': white_value += 3; break;
            case 'P': white_value += 1; break;

            case 'q': black_value += 9; break;
            case 'r': black_value += 5; break;
            case 'b': black_value += 3; break;
            case 'n': black_value += 3; break;
            case 'p': black_value += 1; break;
        }
    }

    return white_value - black_value;
}