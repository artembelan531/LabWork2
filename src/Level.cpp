#include "Level.h"
#include <iostream>

Level::Level(int width, int height)
    : width(width), height(height), player(nullptr) {
    tiles.resize(height, std::vector<char>(width, '#'));
}

void Level::generate() {
    
    for (int y = 1; y < height - 1; ++y) {
        for (int x = 1; x < width - 1; ++x) {
            tiles[y][x] = '.';
        }
    }
    tiles[height - 2][width - 2] = 'E'; 
}

void Level::addEntity(Entity* entity) {
    entities.push_back(entity);
}

void Level::setPlayer(Player* player) {
    this->player = player;
}

void Level::render() const {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            char tile = tiles[y][x];
            for (const auto& entity : entities) {
                if (entity->getX() == x && entity->getY() == y) {
                    if (entity == player) {
                        tile = '@';  
                    } else {
                        tile = 'G';  
                    }
                }
            }
            std::cout << tile;
        }
        std::cout << '\n';
    }
}

bool Level::isPositionValid(int x, int y) const {
    return x >= 0 && x < width && y >= 0 && y < height && tiles[y][x] != '#';
}

void Level::update() {
    if (!player) return;  

    for (auto& entity : entities) {
        if (entity != player) {
            
            int dx = (player->getX() > entity->getX()) ? 1 : -1;
            int dy = (player->getY() > entity->getY()) ? 1 : -1;
            if (isPositionValid(entity->getX() + dx, entity->getY() + dy)) {
                entity->setPosition(entity->getX() + dx, entity->getY() + dy);
            }
        }
    }
}
