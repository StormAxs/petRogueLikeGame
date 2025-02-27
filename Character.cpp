//
// Created by sta on 2/27/25.
//

#include "Character.h"
#include <iostream>

Character::Character(int startX, int startY)
    : x(startX), y(startY), HP(50), DMG(1) {}

void Character::Move(int dx, int dy)
{
    x += dx;
    y += dy;
}

void Character::DisplayStats() const
{
    std::cout << "Character #:\n";
    std::cout << "Position: (" << x << ", " << y << ")\n";
    std::cout << "Health: " << HP << "\n";
    std::cout << "Strength: " << DMG << "\n";
}

