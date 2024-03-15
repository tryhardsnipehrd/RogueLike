#include "include/player.hpp"

void Player::SetPosition( GameData& Settings, int x, int y )
{
    // Clamp the values to map size, since you should not go off screen
    if ( x < 0 ) x = 0;
    if ( x > Settings.MapWidth ) x = Settings.MapWidth;
    if ( y < 0 ) y = 0;
    if ( y > Settings.MapHeight ) y = Settings.MapHeight;
    Position.x = x;
    Position.y = y;
};

Player::Player( std::string name, char representation, int x, int y ) {
    Name = name;
    Representation = representation;
    Position.x = x;
    Position.y = y;
};
