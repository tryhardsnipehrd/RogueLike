#include "include/renderer.hpp"

void RenderScreen(GameData& Settings)
{

    // First clear the screen, so we can use write what we need
    Settings.GameWindow.clear(sf::Color::Black);


    // Now draw all of our changes
    Settings.GameWindow.display();
};
