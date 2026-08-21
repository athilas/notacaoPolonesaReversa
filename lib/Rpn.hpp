#pragma once
#include <string>
#include <vector>

class Rpn {
    private:
    std::vector<std::string> pilha;
    public:
    std::vector<std::string> empilhar(std::string expressao);
    bool verifica(std::string expressao);
    float calcula(std::string expressao);
 };
