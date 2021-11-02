#ifndef GAME_STATE_H
#define GAME_STATE_H

#include <stdint.h>

typedef uint8_t GameState;

GameState game_state = 0u;

#define OVER 1u
#define is_game_over() (game_state & OVER)
#define set_game_over() (game_state |= OVER)
#define unset_game_over() (game_state &= ~OVER)

#define STARTED 2u
#define has_game_started() (game_state & STARTED)
#define set_game_started() (game_state |= STARTED)
#define unset_game_started() (game_state &= ~STARTED)

#define L_PRESS 4u
#define is_l_pressed() (game_state & L_PRESS)
#define set_l_pressed() (game_state |= L_PRESS)
#define unset_l_pressed() (game_state &= ~L_PRESS)

#define R_PRESS 8u
#define is_r_pressed() (game_state & R_PRESS)
#define set_r_pressed() (game_state |= R_PRESS)
#define unset_r_pressed() (game_state &= ~R_PRESS)

#endif