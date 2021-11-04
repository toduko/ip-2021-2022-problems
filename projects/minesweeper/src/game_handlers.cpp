#include "game_state.h"
#include <iostream>
#include "game.h"

unsigned int count_discovered = 0;

void Game::handle_reveal(unsigned int x, unsigned int y)
{
    if (is_hidden(this->board[x][y]))
    {
        show(this->board[x][y]);
        ++count_discovered;

        if (!has_game_started())
        {
            set_game_started();
            init_board(this->board, x, y);
        }
        else
        {
            if ((!is_marked(this->board[x][y])) && (is_mine(this->board[x][y])))
            {
                std::cout << "Game over you lose.\n";
                set_game_over();
            }
        }

        if (is_empty(this->board[x][y]))
        {
            show_neighbours(this->board, x, y, count_discovered);
        }

        if (count_discovered == NUM_TILES * NUM_TILES - NUM_MINES && !is_game_over())
        {
            std::cout << "You win.\n";
            set_game_over();
        }
    }
}

void Game::handle_l_click(unsigned int x, unsigned int y)
{
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        if (!is_l_pressed())
        {
            set_l_pressed();

            this->handle_reveal(x, y);
        }
    }
    else
    {
        unset_l_pressed();
    }
}

void Game::handle_r_click(unsigned int x, unsigned int y)
{
    if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
    {
        if (has_game_started())
        {
            if (!is_r_pressed())
            {
                set_r_pressed();

                if (is_hidden(this->board[x][y]))
                {
                    toggle_marked(this->board[x][y]);
                }
            }
        }
    }
    else
    {
        unset_r_pressed();
    }
}

void Game::handle_keypress(sf::Event event)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::R)
        {
            if (has_game_started())
            {
                unset_game_over();
                unset_game_started();
                this->setup();
            }
        }
    }
}

void Game::handle_mouse()
{
    if (!is_game_over())
    {
        sf::Vector2i pos = sf::Mouse::getPosition(this->window);
        pos.x /= IMAGE_SIZE;
        pos.y /= IMAGE_SIZE;

        if (is_valid(pos.x, pos.y))
        {
            this->handle_l_click(pos.x, pos.y);
            this->handle_r_click(pos.x, pos.y);
        }
    }
}

void Game::handle_events()
{
    sf::Event event;
    while (this->window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            this->window.close();
        }

        this->handle_keypress(event);
        this->handle_mouse();
    }
}