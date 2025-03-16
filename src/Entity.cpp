#include "Entity.h"
#include <iostream>

Entity::Entity(const std::string& name, int health, int attack, int x, int y)
    : name(name), health(health), attack(attack), x(x), y(y) {}

void Entity::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool Entity::isAlive() const {
    return health > 0;
}

void Entity::attackEntity(Entity& target) {
    target.takeDamage(attack);
    std::cout << name << " attacks " << target.getName() << " for " << attack << " damage!\n";
}

std::string Entity::getName() const {
    return name;
}

int Entity::getHealth() const {
    return health;
}

int Entity::getAttack() const {
    return attack;
}

int Entity::getX() const {
    return x;
}

int Entity::getY() const {
    return y;
}

void Entity::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}
