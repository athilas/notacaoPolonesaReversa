#include "../lib/Rpn.hpp"
#include "../lib/Calculo.hpp"
#include <iostream>
#include <regex>
#include <sstream>
#include <string>


std::vector<std::string> Rpn::empilhar(std::string expressao) {
    std::stringstream separado(expressao);
    std::string termo;
    pilha.clear();
    while (separado >> termo) {
        pilha.push_back(termo);
    }
    return pilha;
}

bool Rpn::verifica(std::string expressao) {

    pilha = empilhar(expressao);
    int numeros =0, operandos = 0;
    for (int i = 0 ; i < pilha.size() ; i++) {
        if (pilha[i] == "+" || pilha[i] == "-" || pilha[i] == "*" || pilha[i] == "/" || pilha[i] == "^"||pilha[i] == "/^") {
            operandos++;
        }
        else {
            numeros++;
        }
    }
    if ((operandos + 1) == numeros) {
        return true;
    }
    else {
        return false;
    }

}

float Rpn::calcula(std::string expressao) {
    Calculo calc;
    if (!verifica(expressao)) {
        return 0.0;
    }
    pilha.clear();
    pilha = empilhar(expressao);
    float resultado =0;
    for (int i = 0 ; i < pilha.size() ; i++) {

        if (pilha[i] == "+") {

            resultado = calc.soma(std::stof(pilha[i - 1]),std::stof(pilha[i - 2]));
            pilha.erase(pilha.begin() + i);
            pilha.erase(pilha.begin() + i - 1);
            pilha[i - 2] = std::to_string(resultado);
            i -= 2;
        }

        if (pilha[i] == "-") {
            resultado = calc.subtracao(std::stof(pilha[i-1]),std::stof(pilha[i-2]));
            pilha.erase(pilha.begin()+i);
            pilha.erase(pilha.begin()+i-1);
            pilha[i-2] = std::to_string(resultado);
            i -= 2;
        }

        if (pilha[i] == "*") {
            resultado = calc.multiplicacao(std::stof(pilha[i-1]),std::stof(pilha[i-2]));
            pilha.erase(pilha.begin()+i);
            pilha.erase(pilha.begin()+i-1);
            pilha[i-2] = std::to_string(resultado);
            i -= 2;
        }

        if (pilha[i] == "/") {
            resultado = calc.divisao(std::stof(pilha[i-1]),std::stof(pilha[i-2]));
            pilha.erase(pilha.begin()+i);
            pilha.erase(pilha.begin()+i-1);
            pilha[i-2] = std::to_string(resultado);
            i -= 2;
        }

        if (pilha[i] == "^") {
            resultado = calc.potencia(std::stof(pilha[i-1]),std::stof(pilha[i-2]));
            pilha.erase(pilha.begin()+i);
            pilha.erase(pilha.begin()+i-1);
            pilha[i-2] = std::to_string(resultado);
            i -= 2;
        }

        if (pilha[i] == "/^") {
            resultado = calc.raiz(std::stof(pilha[i-1]),std::stof(pilha[i-2]));
            pilha.erase(pilha.begin()+i);
            pilha.erase(pilha.begin()+i-1);
            pilha[i-2] = std::to_string(resultado);
            i -= 2;

        }
    }

    return resultado;
}

