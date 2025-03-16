#include <gtest/gtest.h>
#include "Enemy.h"
#include "Player.h"

TEST(EnemyTest, AttackPlayer) {
    Player player("Hero", 0, 0);
    Enemy enemy("Goblin", 50, 5, 1, 1);

    
    enemy.attackEntity(player);

    EXPECT_EQ(player.getHealth(), 95);  
}
