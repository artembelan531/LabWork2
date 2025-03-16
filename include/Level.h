#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <iostream>
#include "Entity.h"
#include "Player.h"  

class Level {
private:
    int width, height;
    std::vector<std::vector<char>> tiles;
    std::vector<Entity*> entities;
    Player* player;  

public:
    Level(int width, int height);
    void generate();
    void addEntity(Entity* entity);
    void setPlayer(Player* player);
    void render() const;
    bool isPositionValid(int x, int y) const;
    void update();
};

#endif
