#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
public:
    int x, y;
    int HP;
    int DMG;

    Character(int startX, int startY);

    void Move(char direction, int maxWidth, int maxHeight);
    void DisplayStats() const;
};

#endif // CHARACTER_H
