#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory {
private:
    std::vector<Item*> items;  

public:
    
    void addItem(Item* item);

    
    void display() const;

    
    const std::vector<Item*>& getItems() const;
};

#endif
