#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.hpp>
#include "constants.h"
#include "board.h"

class Game
{
public:
    void setup();
    void loop();

private:
    void handle_events(sf::Event event);
    void handle_reveal(unsigned int x, unsigned int y);
    void draw_cell(unsigned int x, unsigned int y);
    void handle_keypress(sf::Event event);
    void handle_mouse();
    void handle_l_click(unsigned int x, unsigned int y);
    void handle_r_click(unsigned int x, unsigned int y);
    void draw_board();
    void draw();
    sf::RenderWindow window;
    Tile board[NUM_TILES][NUM_TILES];
};

#endif