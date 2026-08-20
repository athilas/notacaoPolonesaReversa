#include "../lib/Rpn.hpp"
#include "../lib/Calculo.hpp"
#include <iostream>
#include <regex>
#include <sstream>
#include <string>


// bool Rpn::verifica(std::string expressao) {
//
//     std::regex padrao(R"([\/\+\*\-])");
//     std::sregex_iterator it(expressao.begin(), expressao.end(), padrao);
//     std::sregex_iterator end;
//
//     int contador = 0;
//     while (it != end) {
//         ++contador;
//         ++it;
//     }
//
// }

float Rpn::calcula(std::string expressao) {
    std::stringstream separado(expressao);
    std::string termo;
    Calculo calc;
    float resultado =0;

    while (separado >> termo) {
        pilha.push_back(termo);
    }
    int total = pilha.size();
    for (int i = 0 ; i < pilha.size() ; i++) {
        if (pilha[i] == "+") {

            resultado = calc.soma(std::stof(pilha[i-1]),std::stof(pilha[i-2]));
            pilha.erase(pilha.begin()+i);
            pilha.erase(pilha.begin()+i-1);
            pilha[i-2] = std::to_string(resultado);
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
    }

    return resultado;
}

