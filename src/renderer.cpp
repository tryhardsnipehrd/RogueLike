#include "include/renderer.hpp"

void RenderScreen(GameData& Settings)
{
    int PlayerX, PlayerY;

    // First clear the screen, so we can use write what we need
    Settings.GameWindow.clear(sf::Color::Black);
    

    // Draw the player last, so that they are above anything else
    sf::Text text(Settings.Game.player.getRepresentation(), Settings.GameFont);
    sf::Vector2u NewPlayerPos;
    Settings.Game.player.getPosition( PlayerX, PlayerY );
    NewPlayerPos = ConvertToGrid( Settings, PlayerX, PlayerY );
    text.setPosition( float( NewPlayerPos.x ), float( NewPlayerPos.y ) );
    Settings.GameWindow.draw(text);

    // Now draw all of our changes
    Settings.GameWindow.display();
};


sf::Vector2u ConvertToGrid( GameData& Settings, int x, int y )
{
    sf::Vector2u windowSize = Settings.GameWindow.getSize();
    sf::Vector2u newCoords;

    int gridWidth = int( windowSize.x / Settings.MapWidth );
    int gridHeight = int( windowSize.y / Settings.MapHeight );

    newCoords.x = x * gridWidth;
    newCoords.y = y * gridHeight;

    return newCoords;

}
