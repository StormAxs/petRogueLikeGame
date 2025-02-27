#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <random>
#include "generation.h"

void GenerateGameField() {
    generation GenData;

    int width = GenData.SectorWidth;
    int height = GenData.SectorHeight;

    std::srand(std::time(nullptr));
    std::vector<std::vector<char>> grid(height, std::vector<char>(width, ' '));

    //make it random
    int x = std::rand() % width;
    int y = std::rand() % height;
    grid[y][x] = '#';

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
