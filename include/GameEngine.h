#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Level.h"
#include "Player.h"
#include "Enemy.h"
#include "GameMode.h"

class GameEngine {
private:
    Level level;
    Player player1;
    Player player2; 
    std::vector<Enemy> enemies;
    GameMode mode;

    void handleInput();
    void update();
    void render();

public:
    GameEngine(GameMode mode);
    void start();
};

#endif
