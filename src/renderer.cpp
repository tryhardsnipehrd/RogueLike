#include "include/renderer.hpp"

void RenderScreen(GameData& Settings)
{
    int PlayerX, PlayerY;

    // First clear the screen, so we can use write what we need
    Settings.GameWindow.clear(sf::Color::Black);
    

    // Draw the player last, so that they are above anything else
    sf::Text text(Settings.Game.player.getRepresentation(), Settings.GameFont);
    Settings.Game.player.getPosition( PlayerX, PlayerY );
    text.setPosition( float( PlayerX ), float( PlayerY ) );
    Settings.GameWindow.draw(text);

    // Now draw all of our changes
    Settings.GameWindow.display();
};
