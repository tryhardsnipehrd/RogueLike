#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "renderer.hpp"
#include "gameSettings.hpp"

using namespace std;

void HandleInput(GameData& Settings, sf::Event::KeyEvent key);
