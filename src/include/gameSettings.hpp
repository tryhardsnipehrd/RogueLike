#pragma once

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <list>
#include "entity.hpp"
#include "player.hpp"

class GameState {
    private:
        std::list<Entity> EntityList;
    public:
        Player player = Player( "Player", '@', 50, 50 );
};

class GameData {
    public:
        sf::RenderWindow GameWindow;
        sf::Font GameFont;
        GameState Game;
        int MapHeight = 25;
        int MapWidth = 80; 
};

