#include "pch.h"
#include "../GADE7212_2021_UnitTests/math.h"

TEST(MathTest, AddTest) {
	math m;

  EXPECT_EQ(m.add(10,10), 20);
}

TEST(MathTest, NegativeAddTest) {
	math m;

  EXPECT_EQ(m.add(-10,10), 0);
}

TEST(MathTest, OverflowAddTest) {
	math m;

  EXPECT_EQ(m.add(100000000,100000000), 200000000);
}