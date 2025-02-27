//
// Created by sta on 2/27/25.
//
#include "generation.h"

#include <iostream>

void GenerateGameField(int SectorWidth, int SectorHeight)
{
    generation GenData;
    for (int y = 1; y <= GenData.SectorHeight ; y++)
    {
        for (int x = 1; x <= GenData.SectorWidth ; x++)
        {
            if (y % GenData.SectorHeight == 0)
            {
                std::cout << "+---";
            }
            else
            {
                std::cout << "|";
            }
        }
        std::cout << (y % GenData.SectorHeight == 0 ? "+" : "|") << std::endl;
    }

}
