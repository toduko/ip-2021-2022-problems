#include "game.h"
#include <string>

std::string get_texture_name(uint8_t value)
{
    std::string texture_name = "hidden";

    if (is_marked(value))
    {
        texture_name = "flag";
    }
    else if (!is_hidden(value))
    {
        if (is_mine(value))
        {
            texture_name = "bomb";
        }
        else
        {
            texture_name = (value + 48);
        }
    }
    return texture_name;
}

void Game::draw_cell(unsigned int x, unsigned int y)
{
    sf::Texture texture;
    sf::Sprite sprite;

    const uint8_t curr_val = this->board[x][y];
    std::string texture_name = get_texture_name(curr_val);

    texture.loadFromFile(("assets/" + texture_name + ".png"), sf::IntRect(0, 0, IMAGE_SIZE, IMAGE_SIZE));
    sprite.setTexture(texture);
    sprite.setPosition(x * IMAGE_SIZE, y * IMAGE_SIZE);

    this->window.draw(sprite);
}

void Game::draw_board()
{
    for (unsigned int row = 0; row < NUM_TILES; ++row)
    {
        for (unsigned int col = 0; col < NUM_TILES; ++col)
        {

            this->draw_cell(row, col);
        }
    }
}