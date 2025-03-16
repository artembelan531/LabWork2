#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Inventory.h"

class Player : public Entity {
private:
    Inventory inventory;

public:
    Player(const std::string& name, int x, int y);
    void move(int dx, int dy);
    void pickItem(Item* item);
    Inventory& getInventory();
};

#endif
