#include "Armor.h"

Armor::Armor(const std::string& name, int defense)
    : Item(name), defense(defense) {}

int Armor::getDefense() const {
    return defense;
}
