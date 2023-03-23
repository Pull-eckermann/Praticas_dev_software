#include <iostream>
#include <stdexcept>

#include "EquipamentoEletrico.hpp"
#include "Gerador.hpp"
#include "EquipamentoEletricoConvencional.hpp"
#include "EquipamentoEletricoResistivo.hpp"

using namespace erick;

int main(){
    EquipamentoEletricoConvencional *a{new EquipamentoEletricoConvencional{"Furadeira", 10, 10}};
    EquipamentoEletricoResistivo *b{new EquipamentoEletricoResistivo{"Chuveiro", 20, 10}};
    std::cout << a->getNome() << ' ' << a->calculaPotencia() << std::endl;
    std::cout << b->getNome() << ' ' << b->calculaPotencia() << std::endl;

    Gerador ge{"CCE", 2000};
    try{
        ge.adicionarEquipamento(a);
        std::cout << a->getNome() << " adicionado ao gerador" << std::endl;
        ge.adicionarEquipamento(b);
        std::cout << b->getNome() << " adicionado ao gerador" << std::endl;
        std::cout << "Potencia total: " << ge.calculaPotenciaTotal() << std::endl;
    }
    catch(std::runtime_error &re){
        std::cout << re.what() << std::endl;
    }
}