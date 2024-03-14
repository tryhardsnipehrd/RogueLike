#include "include/player.hpp"

void Player::SetPosition( int x, int y )
{
    Position.x = x;
    Position.y = y;
};

Player::Player( std::string name, char representation, int x, int y ) {
    Name = name;
    Representation = representation;
    Position.x = x;
    Position.y = y;
};
