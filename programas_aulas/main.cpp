#include <iostream>
#include "CPF.hpp"

void imprimir(std::string valor){
    std::cout << "O valor eh: " << valor << '\n';
}

void imprimir(unsigned long valor){
    std::cout << "O valor eh: " << valor << '\n';
}

void imprimir(const ufpr::CPF& cpf) {
    std::cout << "O CPF eh: " << cpf << '\n';
}

int main() {
    ufpr::CPF cpf{11111111111};
    imprimir(cpf);
    imprimir(static_cast<std::string>(cpf));
    return 0;
}