#include <iostream>
#include <time.h>
#include "generation.h"
#include "Character.h"

int main() {
    std::srand(time(NULL));
    int startX = std::rand() % 10;
    int startY = std::rand() % 10;
    Character player(startX, startY);

    player.DisplayStats();

    GenerateGameField(player);

    return 0;
}
