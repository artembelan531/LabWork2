#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"  // Включаем заголовочный файл Entity

class Enemy : public Entity {
public:
    Enemy(const std::string& name, int health, int attack, int x, int y);
    void makeMove(Entity& target);
};

#endif
