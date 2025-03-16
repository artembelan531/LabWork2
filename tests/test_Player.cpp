#include <gtest/gtest.h>
#include "Player.h"
#include "Weapon.h"  


TEST(PlayerTest, TakeDamage) {
    Player player("Hero", 0, 0);
    player.takeDamage(20);
    EXPECT_EQ(player.getHealth(), 80);  
}


TEST(PlayerTest, PickItem) {
    Player player("Hero", 0, 0);
    Weapon sword("Sword", 10);  
    player.pickItem(&sword);    

    
    EXPECT_EQ(player.getInventory().getItems().size(), 1);
}
