#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "CPF.hpp"

int main(){
    ufpr::CPF cpf{11111111111};
    ufpr::CPF cpf2{11111111111};
    ufpr::Pessoa p1{"Paulo", cpf, 30};

    if(cpf.operator==(cpf2))
        std::cout << "Iguais\n";
    else
        std::cout << "Diferentes\n";

    //std::cout << p1.getCpf().getNumero() << '\n';
    
    return 0;
}