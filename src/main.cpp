#include "include/main.hpp"

int main() {
    sf::Window GameWindow;
    GameWindow.create( sf::VideoMode( 1920, 1080 ), "Roguelike" );
    
    while ( GameWindow.isOpen() )
    {
        sf::Event event;
        while ( GameWindow.pollEvent( event ) )
        {
            if ( event.type == sf::Event::Closed )
            {
                GameWindow.close();
            }
        }
    }

    return 0;

};
