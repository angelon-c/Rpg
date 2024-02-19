//
// Created by angel on 2/18/24.
//

#ifndef RPG_COMBATSYSTEM_H
#define RPG_COMBATSYSTEM_H
#include "../Character/Character.h"
#include "../Player/Player.h"
#include "../Enemy/Enemy.h"
#include <iostream>

class CombatSystem {
public:

 bool Combatstatus(Player *player,Enemy *enemy);

 void Combat(Player *player,Enemy *enemy);

};
#endif //RPG_COMBATSYSTEM_H
