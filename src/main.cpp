#include "GameEngine.h"
#include "GameMode.h"

int main() {
    GameEngine game(GameMode::Cooperative);
    game.start();
    return 0;
}
