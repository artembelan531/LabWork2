/* Belan Artem Vladislavovich
./Labwork2 st135609@student.spbu.ru*/
#include <gtest/gtest.h>
#include "add.h"

TEST(AddTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(10, 3), 13);
}

TEST(AddTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(0, -1), -1);
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
