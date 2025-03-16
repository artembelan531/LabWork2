#include "Inventory.h"
#include <iostream>


void Inventory::addItem(Item* item) {
    items.push_back(item);
}


void Inventory::display() const {
    for (const auto& item : items) {
        std::cout << item->getName() << " ";
    }
    std::cout << "\n";
}


const std::vector<Item*>& Inventory::getItems() const {
    return items;
}
