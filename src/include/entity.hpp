#pragma once

#include <string>

struct EntityPos {
    int x;
    int y;
};

class Entity {
    protected:
        EntityPos Position;
        std::string Name;
        char Representation;
    public:
        void getPosition( int& x, int& y );
        bool setName( std::string NewName );
        std::string getName();
        char getRepresentation();
        Entity( std::string name, char representation, int x, int y );
        Entity() {};
};
