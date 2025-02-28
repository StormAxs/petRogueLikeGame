//
// Created by sta on 2/27/25.
//

#include "Character.h"
#include <iostream>

Character::Character(int startX, int startY)
    : x(startX), y(startY), HP(50), DMG(1) {}

void Character::Move(char direction, int maxWidth, int maxHeight) {
    //switch case. finally
    switch (direction) {
    case 'w': // W
        if (y > 0) y--;
        break;
    case 's': // S
        if (y < maxHeight - 1) y++;
        break;
    case 'a': // A
        if (x > 0) x--;
        break;
    case 'd': // D
        if (x < maxWidth - 1) x++;
        break;
    }
}


void Character::DisplayStats() const
{
    std::cout << "Character #:\n";
    std::cout << "Position: (" << x << ", " << y << ")\n";
    std::cout << "Health: " << HP << "\n";
    std::cout << "Strength: " << DMG << "\n";
}

