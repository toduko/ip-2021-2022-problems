#include "game.h"

void Game::setup()
{
    this->window.create(sf::VideoMode(NUM_TILES * IMAGE_SIZE, NUM_TILES * IMAGE_SIZE), "Minesweeper", sf::Style::Titlebar | sf::Style::Close);
    this->window.setFramerateLimit(30);
    clear_board(this->board);
}

void Game::init()
{
    
    
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
        sf::Event event;
        while (this->window.pollEvent(event))
        {
            this->handle_events(event);
        }
        this->draw();
    }
}