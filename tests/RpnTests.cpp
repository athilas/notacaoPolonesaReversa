#include <gtest\gtest.h>
#include <string>
#include "../lib/Rpn.hpp"

Rpn rpn;

TEST(Expressao, basico) {
    EXPECT_EQ(12.0f, rpn.calcula(std::string("2 2 2 + + 2 4 / *")));
}

TEST(Expressao, corretoBuild) {
    EXPECT_EQ(true, rpn.verifica(std::string("2 2 2 + + 2 4 / *")));
}

TEST(Expressao, erroOperando) {
    EXPECT_EQ(false, rpn.verifica(std::string("2 2 2 + + 2 4 *")));
}
TEST(Expressao, empilhar) {
    std::vector<std::string> testep = {"2","2","2","+","+","2","4","*"};
    EXPECT_EQ(testep, rpn.empilhar(std::string("2 2 2 + + 2 4 *")));
}