#include "include/main.hpp"

int main() {

    GameData Settings;
    Settings.GameWindow.create(sf::VideoMode(1920, 1080), "RogueLike" );

    if ( !Settings.GameFont.loadFromFile("GameFont.ttf") ) 
    {
        return 1;
    }

    while ( Settings.GameWindow.isOpen() )
    {
        sf::Event event;
        while ( Settings.GameWindow.pollEvent( event ) )
        {
            if ( event.type == sf::Event::Closed )
            {
                Settings.GameWindow.close();
            }
        }

       RenderScreen(Settings); 
    }

    return 0;

}; 
