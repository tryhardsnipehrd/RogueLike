#pragma once

#include "entity.hpp"
#include "gameSettings.hpp"
#include <string>

class Player : public Entity
{
    public:
        void SetPosition(GameData& Settings, int x, int y);        
        Player( std::string name, char representation, int x, int y );
        Player() {};
};


