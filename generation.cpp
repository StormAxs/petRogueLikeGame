#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "generation.h"
#include "Character.h"

void GenerateGameField(Character &player) {
    generation GenData;

    int width = GenData.SectorWidth;
    int height = GenData.SectorHeight;

    std::vector<std::vector<char>> grid(height, std::vector<char>(width, ' '));

    grid[player.y][player.x] = '#';

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << "+---";
        }
        std::cout << "+" << std::endl;

        for (int x = 0; x < width; x++) {
            std::cout << "| " << grid[y][x] << " ";
        }
        std::cout << "|" << std::endl;
    }

    for (int x = 0; x < width; x++) {
        std::cout << "+---";
    }
    std::cout << "+" << std::endl;
}
