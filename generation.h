
#ifndef GENERATION_H
#define GENERATION_H
#include "Character.h"

class generation {
    public:
    int SectorWidth = 10;
    int SectorHeight = 10;

};

void GenerateGameField(Character &player);

#endif //GENERATION_H
