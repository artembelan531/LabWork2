#include "Enemy.h"
#include <iostream>

Enemy::Enemy(const std::string& name, int health, int attack, int x, int y)
    : Entity(name, health, attack, x, y) {}

void Enemy::makeMove(Entity& target) {
    std::cout << name << " makes a move!\n";
    attackEntity(target);
}
