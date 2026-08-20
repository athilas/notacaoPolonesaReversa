
#include <gtest/gtest.h>
#include "../lib/Calculo.hpp"

Calculo calc;

TEST(SomaTeste, positivos) {
    EXPECT_EQ(calc.soma(5.0f, 2.0f), 7);
}

TEST(SomaTeste, negativos) {
    EXPECT_EQ(calc.soma(-5.0f, -2.0f), -7);
}

TEST(SubtracaoTeste, positivos) {
    EXPECT_EQ(calc.subtracao(5.0f, 2.0f), 3);
}

TEST(SubtracaoTeste, negativos) {
    EXPECT_EQ(calc.subtracao(-5.0f, -2.0f), -3);
}

TEST(MultiplicacaoTeste, positivos) {
    EXPECT_EQ(calc.multiplicacao(5.0f, 2.0f), 10);
}

TEST(MultiplicaçãoTeste, negativos) {
    EXPECT_EQ(calc.multiplicacao(-5.0f, -2.0f), 10);
}

TEST(DivisaoTeste, positivos) {
    EXPECT_EQ(calc.divisao(5.0f, 2.0f), 2.5);
}

TEST(DivisaoTeste, negativos) {
    EXPECT_EQ(calc.divisao(-5.0f, -2.0f), 2.5);
}

TEST(DivisaoTest, DivisaoPorZeroExibeMensagem) {
    EXPECT_EQ(calc.divisao(5.0f, 0.0f), 0);
    }
