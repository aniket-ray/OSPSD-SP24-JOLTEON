//
// Created by Shunyu Yao on 2/10/24.
//


#include "gtest/gtest.h"
#include "../src/calculator.cpp"

TEST(AdditionTest, TwoPlusTwoEqualsFour) {
EXPECT_EQ(add(1, 1), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
