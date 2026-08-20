#pragma once
#include <string>
#include <vector>

class Rpn {
    private:
    std::vector<std::string> pilha;
    public:
    //bool verifica(std::string expressao);
    float calcula(std::string expressao);
 };
