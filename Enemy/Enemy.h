//
// Created by angel on 2/18/24.
//

#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H


#include "../Character/Character.h"

class Enemy: public Character {
public:
    Enemy(string, int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
};


#endif //RPG_ENEMY_H
