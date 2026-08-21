#include <iostream>
#include <Windows.h>

#include "lib/Rpn.hpp"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Rpn rpn;
    std::string conta;
    std::cout << "Notação Polonesa Reversa" << std::endl;
    std::cout<<"Digite a expressão e notação polonesa: ";
    std::getline(std::cin,conta);
    std::cout << conta << std::endl;
    std::cout << rpn.calcula(std::string(conta)) << std::endl;
    return 0;
}