//
// Created by angel on 2/18/24.
//

#include "Enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy(string name, int health, int attack, int defense, int speed) : Character(name, health, attack, defense, speed) {
}

void Enemy::doAttack(Character *target) {
    int trueDamage = getAttack() - target->getDefense();
    if (trueDamage<=0){
        target->takeDamage(0);
    } else {
        target->takeDamage(trueDamage);
    }
    }

void Enemy::takeDamage(int damage) {
    setHealth(health - damage);
    if(getHealth() <= 0) {
        cout<<getName()<<" has died"<<endl;
    }
    else {
        cout<<getName()<<" has taken " << damage << " damage. " <<"health left "<<health<<endl;
    }
}

