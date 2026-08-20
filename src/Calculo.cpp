#include "../lib/Calculo.hpp"

#include <iostream>
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
