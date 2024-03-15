#include "include/main.hpp"

int main() {

    GameData Settings;
    Settings.GameWindow.create(sf::VideoMode(1920, 1080), "RogueLike" );
    
    Settings.Game.player.SetPosition(0, 0);

    if ( !Settings.GameFont.loadFromFile("GameFont.ttf") ) 
    {
        return 1;
    }

    while ( Settings.GameWindow.isOpen() )
    {
        sf::Event event;
        while ( Settings.GameWindow.pollEvent( event ) )
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    Settings.GameWindow.close();
                    break;

                case sf::Event::KeyPressed:
                    HandleInput( Settings, event.key );
                    break;
            }
        }
        RenderScreen(Settings); 
    }

    return 0;

}; 


void HandleInput(GameData& Settings, sf::Event::KeyEvent key)
{
    int PlayerX, PlayerY;
    Settings.Game.player.getPosition( PlayerX, PlayerY );
    switch ( key.code )
    {
        case sf::Keyboard::Right:
            Settings.Game.player.SetPosition( Settings, PlayerX + 1, PlayerY );
            break;

        case sf::Keyboard::Left:
            Settings.Game.player.SetPosition( Settings, PlayerX - 1, PlayerY );
            break;

        case sf::Keyboard::Up:
            Settings.Game.player.SetPosition( Settings, PlayerX, PlayerY - 1 );
            break;

        case sf::Keyboard::Down:
            Settings.Game.player.SetPosition( Settings, PlayerX, PlayerY + 1 );
            break;

        default:
            break;

    }
}
