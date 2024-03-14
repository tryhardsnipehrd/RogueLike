#include "include/entity.hpp"

Entity::Entity( std::string name, char representation, int x, int y ) {
    Name = name;
    Representation = representation;
    Position.x = x;
    Position.y = y;
};

char Entity::getRepresentation()
{
    return Representation;   
};

std::string Entity::getName()
{
    return Name;
};

bool Entity::setName( std::string NewName )
{
    bool isValidName = true;

    // Later, we will iterate through the NewName, in order to ensure no
    // invalid characters are in it.
    // This will mostly be used by the character naming part.
    Name = NewName;
    
    return isValidName;
};

void Entity::getPosition( int& x, int& y)
{
    x = Position.x;
    y = Position.y;
};
