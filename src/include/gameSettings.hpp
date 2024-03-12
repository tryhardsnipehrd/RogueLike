#pragma once

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>


struct PlayerPos {
    int x;
    int y;
};

class GameData {
    public:
        sf::RenderWindow GameWindow;
        sf::Font GameFont;
        int MapHeight = 25;
        int MapWidth = 80;
        PlayerPos Pos; 
};

