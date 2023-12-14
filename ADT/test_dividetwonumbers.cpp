#include <gtest/gtest.h>
#include "../ADT/dividetwonumbers.cpp"

TEST(DivideNumbersTest, PositiveNumbers) {
    EXPECT_FLOAT_EQ(divideNumbers(10, 2), 5);
    EXPECT_FLOAT_EQ(divideNumbers(25, 5), 5);
}

TEST(DivideNumbersTest, ZeroDenominator) {
    EXPECT_THROW(divideNumbers(15, 0), const char*);
}

TEST(DivideNumbersTest, NegativeNumbers) {
    EXPECT_FLOAT_EQ(divideNumbers(-8, 4), -2);
}

TEST(DivideNumbersTest, DecimalResult) {
    EXPECT_FLOAT_EQ(divideNumbers(7, 3), 2.3333333333333335);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}