#include "../lib/Calculo.hpp"

#include <cmath>
#include <iostream>
#include <cmath>
#include <ostream>

float Calculo::soma(float a, float b) {
    return a + b;
}

float Calculo::subtracao(float a, float b) {
    return a - b;
}

float Calculo::multiplicacao(float a, float b) {
    return a * b;
}

float Calculo::divisao(float a, float b) {
    if (b == 0) {
        std::cout<<"Divisão por zero, operação indevida..."<<std::endl;
        return 0;
    }
    return a / b;
}

float Calculo::raiz(float indice, float b) {
    if (b < 0) {

    }
    return std::pow(b,1/indice);
}

float Calculo::potencia(float expoente , float base) {
    return std::pow(base,expoente);
}
