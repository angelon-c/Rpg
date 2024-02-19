//
// Created by angel on 2/18/24.
//

#include "CombatSystem.h"


bool CombatSystem::Combatstatus(Player *player, Enemy *enemy) {
    bool GG = false;
    if (player->getHealth() <= 0) {
        GG = true;

    }

    else if (enemy->getHealth()<=0) {
        GG=true;
    }
    else {
        GG = false;
    }
    return GG;
}

void CombatSystem:: Combat(Player *player, Enemy *enemy) {
    bool GG = false;

    while (!GG) {
        //Empieza el jugador
        player->doAttack(enemy);
        //verifica si murió
        GG=(Combatstatus(player,enemy));
        if(GG)
            break;

        enemy->doAttack(player);

        GG=(Combatstatus(player, enemy));

    }
}