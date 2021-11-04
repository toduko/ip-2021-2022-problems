#include <stdlib.h>
#include "board.h"
#include <time.h>
#include <set>

void clear_board(Tile board[NUM_TILES][NUM_TILES])
{
    for (int row = 0; row < NUM_TILES; ++row)
    {
        for (int col = 0; col < NUM_TILES; ++col)
        {
            board[row][col] = HIDDEN;
        }
    }
}

void check_for_neighbours(Tile board[NUM_TILES][NUM_TILES], int x, int y, unsigned int &count)
{
    if ((is_valid(x, y)) &&
        (is_hidden(board[x][y])) &&
        (!is_mine(board[x][y])))
    {
        show(board[x][y]);
        if (is_empty(board[x][y]))
        {
            show_neighbours(board, x, y, count);
        }
        ++count;
    }
}

void show_neighbours(Tile board[NUM_TILES][NUM_TILES], unsigned int x, unsigned int y, unsigned int &count)
{
    check_for_neighbours(board, x - 1, y - 1, count);
    check_for_neighbours(board, x - 1, y + 0, count);
    check_for_neighbours(board, x - 1, y + 1, count);
    check_for_neighbours(board, x - 0, y - 1, count);
    check_for_neighbours(board, x + 0, y + 1, count);
    check_for_neighbours(board, x + 1, y - 1, count);
    check_for_neighbours(board, x + 1, y - 0, count);
    check_for_neighbours(board, x + 1, y + 1, count);
}

void insert_mines(Tile board[NUM_TILES][NUM_TILES], const unsigned int num_mines, unsigned int x, unsigned int y)
{
    srand(time(NULL));
    std::set<Coord> coords;

    while (coords.size() < num_mines)
    {
        unsigned int candidate_x, candidate_y;
        do
        {
            candidate_x = (rand() % NUM_TILES);
            candidate_y = (rand() % NUM_TILES);
        } while (((candidate_x == x - 1) && (candidate_y == y - 1)) ||
                 ((candidate_x == x - 1) && (candidate_y == y + 0)) ||
                 ((candidate_x == x - 1) && (candidate_y == y + 1)) ||
                 ((candidate_x == x + 0) && (candidate_y == y - 1)) ||
                 ((candidate_x == x + 0) && (candidate_y == y + 0)) ||
                 ((candidate_x == x + 0) && (candidate_y == y + 1)) ||
                 ((candidate_x == x + 1) && (candidate_y == y - 1)) ||
                 ((candidate_x == x + 1) && (candidate_y == y + 0)) ||
                 ((candidate_x == x + 1) && (candidate_y == y + 1)));

        Coord coord(candidate_x, candidate_y);
        coords.insert(coord);
    }

    for (std::set<Coord>::iterator it = coords.begin(); it != coords.end(); ++it)
    {
        set_mine(board[it->first][it->second]);
    }
}

void insert_numbers(Tile board[NUM_TILES][NUM_TILES])
{
    for (int row = 0; row < NUM_TILES; ++row)
    {
        for (int col = 0; col < NUM_TILES; ++col)
        {
            if (!is_mine(board[row][col]))
            {
                int count = (is_valid(row - 1, col - 1) && is_mine(board[row - 1][col - 1])) +
                            (is_valid(row - 1, col + 0) && is_mine(board[row - 1][col + 0])) +
                            (is_valid(row - 1, col + 1) && is_mine(board[row - 1][col + 1])) +
                            (is_valid(row - 0, col - 1) && is_mine(board[row - 0][col - 1])) +
                            (is_valid(row + 0, col + 1) && is_mine(board[row + 0][col + 1])) +
                            (is_valid(row + 1, col - 1) && is_mine(board[row + 1][col - 1])) +
                            (is_valid(row + 1, col - 0) && is_mine(board[row + 1][col - 0])) +
                            (is_valid(row + 1, col + 1) && is_mine(board[row + 1][col + 1]));

                set_count(board[row][col], count);
            }
        }
    }
}

void init_board(Tile board[NUM_TILES][NUM_TILES], unsigned int x, unsigned int y)
{
    insert_mines(board, NUM_MINES, x, y);
    insert_numbers(board);
}