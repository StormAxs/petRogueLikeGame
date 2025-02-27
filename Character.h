//
// Created by sta on 2/27/25.
//

#ifndef CHARACTER_H
#define CHARACTER_H



class Character {
    public:
    int x, y;
    int HP;
    int maxHP{};
    int DMG;

    //Don't forget we have 0/0
    Character(int StartX, int StartY);

    void Move(int dx, int dy);
    void DisplayStats() const ;
};



#endif //CHARACTER_H
