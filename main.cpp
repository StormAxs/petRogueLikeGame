#include <iostream>
#include <time.h>
#include "generation.h"
#include "Character.h"

int main() {
    std::srand(time(NULL));
    int startX = std::rand() % 10;
    int startY = std::rand() % 10;

        Character player(startX, startY);
        char input;

        while (true) {
            player.DisplayStats();
            GenerateGameField(player);

            std::cout <<  "W/A/S/D for move. Q to quit:  ";
            std::cin >> input;

            if (input == 'q' || input == 'Q') {
                std::cout << "Exiting game...";
                break;
            }

            player.Move(input, 10, 10);
        }

        return 0;
    }
