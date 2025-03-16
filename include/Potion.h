#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item {
private:
    int power;
public:
    Potion(const std::string& name, int power);
    int getPower() const;
};

#endif
