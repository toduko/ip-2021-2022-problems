#include "game.h"

void Game::setup()
{
    this->window.create(sf::VideoMode(NUM_TILES * IMAGE_SIZE, NUM_TILES * IMAGE_SIZE), "Minesweeper", sf::Style::Titlebar | sf::Style::Close);

    clear_board(this->board);
}

void Game::draw()
{
    this->window.clear();
    this->draw_board();
    this->window.display();
}

void Game::loop()
{
    while (this->window.isOpen())
    {
        this->handle_events();
        this->draw();
    }
}