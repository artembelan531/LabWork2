#include "Weapon.h"


Weapon::Weapon(const std::string& name, int damage)
    : Item(name), damage(damage) {}


int Weapon::getDamage() const {
    return damage;
}
