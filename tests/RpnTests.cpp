#include <gtest\gtest.h>
#include <string>
#include "../lib/Rpn.hpp"

Rpn rpn;

TEST(Expressao, test) {
    EXPECT_EQ(12.0f, rpn.calcula(std::string("2 2 2 + + 2 4 / *")));
}