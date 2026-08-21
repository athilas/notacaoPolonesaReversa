
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

TEST(MultiplicacaoTeste, negativos) {
    EXPECT_EQ(calc.multiplicacao(-5.0f, -2.0f), 10);
}

TEST(DivisaoTeste, positivos) {
    EXPECT_EQ(calc.divisao(5.0f, 2.0f), 2.5);
}

TEST(DivisaoTeste, negativos) {
    EXPECT_EQ(calc.divisao(-5.0f, -2.0f), 2.5);
}

TEST(DivisaoTeste, DivisaoPorZeroExibeMensagem) {
    EXPECT_EQ(calc.divisao(5.0f, 0.0f), 0);
    }

TEST(RaizTeste,indices_2_e_3) {
    EXPECT_EQ(calc.raiz(2, 121), 11);
    EXPECT_EQ(calc.raiz(3, 64), 4);
}

TEST(PotenciaTeste, positivos) {
    EXPECT_EQ(calc.potencia(5.0f, 2.0f), 32);
    EXPECT_EQ(calc.potencia(3.0f, 5.0f), 125);
}

TEST(PotenciaTeste, negativos) {
    EXPECT_EQ(calc.potencia(5.0f, -2.0f), -32);
    EXPECT_EQ(calc.potencia(4.0f, -5.0f), 625);
}

TEST(PotenciaTeste, expoente_positivos) {
    EXPECT_EQ(calc.potencia(5.0f, -2.0f), -32);
    EXPECT_EQ(calc.potencia(3.0f, 5.0f), 125);
}

TEST(PotenciaTeste, expoente_negativos) {
    EXPECT_EQ(calc.potencia(-5.0f, -2.0f), -0.03125f);
    EXPECT_EQ(calc.potencia(-4.0f, 5.0f), 0.0016f);
}

TEST(RaizTeste, positivos) {
    EXPECT_EQ(calc.raiz(2.0f, 4.0f), 2);
    EXPECT_EQ(calc.raiz(3.0f, 27.0f), 3);
}

// TEST(RaizTeste, negativos) {
//     EXPECT_EQ(calc.raiz(2.0f, 4.0f), 2);
//     EXPECT_EQ(calc.raiz(3.0f, -27.0f), -3);
// }