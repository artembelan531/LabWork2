#include "Potion.h"

Potion::Potion(const std::string& name, int power)
    : Item(name), power(power) {}

int Potion::getPower() const {
    return power;
}
