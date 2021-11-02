#ifndef BOARD_H_
#define BOARD_H_

#include "constants.h"
#include <utility>
#include "tile.h"

typedef std::pair<unsigned int, unsigned int> Coord;

void clear_board(Tile board[NUM_TILES][NUM_TILES]);
void show_neighbours(Tile board[NUM_TILES][NUM_TILES], unsigned int x, unsigned int y, unsigned int &count);
void init_board(Tile board[NUM_TILES][NUM_TILES], unsigned int x, unsigned int y);

#endif