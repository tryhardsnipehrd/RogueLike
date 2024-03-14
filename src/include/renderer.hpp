#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include "gameSettings.hpp"

void RenderScreen(GameData& Settings);
sf::Vector2u ConvertToGrid( GameData& Settings, int x, int y );
