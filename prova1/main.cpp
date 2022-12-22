#include <iostream>
#include "TelaDesenho.hpp"
#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "Forma.hpp"


int main(){
    TelaDesenho tela;
    Forma* ret{new Retangulo(10,10)};
    Forma* cir{new Circulo(3)};

    tela.adicionarForma(ret);
    tela.adicionarForma(cir);

    std::cout << "Area Retangulo: " << ret->calculaArea() << std::endl;
    std::cout << "Area Circulo: " << cir->calculaArea() << std::endl;
    std::cout << "Area Total: " << tela.calculaAreaTotal() << std::endl;
}
