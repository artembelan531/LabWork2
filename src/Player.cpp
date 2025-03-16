#include "Player.h"
#include <iostream>

Player::Player(const std::string& name, int x, int y)
    : Entity(name, 100, 10, x, y) {}  
void Player::move(int dx, int dy) {
    setPosition(getX() + dx, getY() + dy);
}

void Player::pickItem(Item* item) {
    if (!item) {
        std::cerr << "Ошибка: попытка добавить nullptr в инвентарь.\n";
        return;
    }
    inventory.addItem(item);
    std::cout << "Подобран предмет: " << item->getName() << "\n";
}

Inventory& Player::getInventory() {
    return inventory;
}
