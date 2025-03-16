#include "GameEngine.h"
#include <iostream>

GameEngine::GameEngine(GameMode mode)
    : level(10, 10), player1("Hero", 1, 1), player2("Hero2", 1, 2), mode(mode) {
    level.generate();
    level.addEntity(&player1);
    level.addEntity(&player2);

    
    enemies.emplace_back("Goblin", 50, 5, 5, 5);
    enemies.emplace_back("Orc", 100, 10, 10, 10);
    enemies.emplace_back("Dragon", 200, 20, 15, 15);
    for (auto& enemy : enemies) {
        level.addEntity(&enemy);
    }
}

void GameEngine::handleInput() {
    char input;
    std::cin >> input;
    switch (input) {
        case 'w': player1.move(0, -1); break;
        case 'a': player1.move(-1, 0); break;
        case 's': player1.move(0, 1); break;
        case 'd': player1.move(1, 0); break;
        case 'i': player2.move(0, -1); break; 
        case 'j': player2.move(-1, 0); break;
        case 'k': player2.move(0, 1); break;
        case 'l': player2.move(1, 0); break;
        case 'q': exit(0); break;
    }
}

void GameEngine::update() {
    level.update();
    for (auto& enemy : enemies) {
        enemy.makeMove(player1);
    }
}

void GameEngine::render() {
    level.render();
    std::cout << "Здоровье игрока 1: " << player1.getHealth() << "\n";
    std::cout << "Здоровье игрока 2: " << player2.getHealth() << "\n";
    std::cout << "Инвентарь: ";
    player1.getInventory().display();
}

void GameEngine::start() {
    
    if (player1.getHealth() <= 0 || player2.getHealth() <= 0) {
        std::cerr << "Игроки не инициализированы или мертвы!\n";
        return;
    }

    while (true) {
        render();
        handleInput();
        update();

        
        if (player1.getHealth() <= 0 || player2.getHealth() <= 0) {
            std::cout << "Игра окончена! Один из игроков погиб.\n";
            break;
        }
    }
}
