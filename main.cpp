#include <iostream>
#include "Character/Character.h"
#include "Player/Player.h"
#include "Enemy/Enemy.h"
#include "CombatSystem/CombatSystem.h"

int main() {
    CombatSystem *combate=new CombatSystem();
    Player *player = new Player("Gojo",80,50,10,70);
    Enemy *enemy = new Enemy("Sukuna", 80,20,20,20);
    combate->Combat(player,enemy);

    delete combate;
    delete player;
    delete enemy;


    return 0;
}