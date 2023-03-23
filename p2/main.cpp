#include <iostream>

#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "TelaDesenho.hpp"
#include "ArgumentoNegativoEx.hpp"

int main(){
    erick::TelaDesenho tela;

    try{
        std::shared_ptr<const erick::Forma> r{new erick::Retangulo{10,2}};
        tela.adicionarForma(r);
        std::cout << tela.calcularAreaTotal() << '\n';
    }catch(erick::ArgumentoNegativoEx &a){
        std::cout << a.what() << a.medida << "\n";
    }

    return 0;
}