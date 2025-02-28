#include <iostream>
#include "generation.h"

void GenerateGameField(Character &player) {
    int width = 10;
    int height = 10;

    std::cout << "\033[2J\033[1;1H";  // ANSI (Still don't know how it works tho)

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << "+---";
        }
        std::cout << "+" << std::endl;

        for (int x = 0; x < width; x++) {
            if (x == player.x && y == player.y)
                std::cout << "| # ";
            else
                std::cout << "|   ";
        }
        std::cout << "|" << std::endl;
    }

    for (int x = 0; x < width; x++) {
        std::cout << "+---";
    }
    std::cout << "+" << std::endl;
}
