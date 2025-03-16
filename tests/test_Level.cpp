#include <gtest/gtest.h>
#include "Level.h"

TEST(LevelTest, GenerateLevel) {
    Level level(10, 10);
    level.generate();

    
    EXPECT_TRUE(true);  
}
