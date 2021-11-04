#ifndef TILE_H_
#define TILE_H_

#include <stdint.h>

#define HIDDEN 128u
#define MARKED 64u
#define VALUE_MASK 63u
#define MINE 32u
#define EMPTY 0u

#define is_hidden(value) (value & HIDDEN)
#define show(value) (value &= ~HIDDEN)

#define is_marked(value) (value & MARKED)
#define toggle_marked(value) (value ^= MARKED)

#define get_value(value) (value & VALUE_MASK)

#define is_mine(value) (value & MINE)
#define set_mine(value) (value |= MINE)

#define set_count(value, count) (value |= count)

#define is_empty(value) (get_value(value) == EMPTY)

#define is_valid(x, y) (x >= 0 && x < NUM_TILES && y >= 0 && y < NUM_TILES)

typedef uint8_t Tile;

#endif