#include <iostream>
#include "Dealer.hpp"
#include "Baralho.hpp"

int main(){
    //Agente ag;

    unsigned int tamanho{1};
    Baralho* b{new Baralho(tamanho)};
    Dealer dealer;
    dealer.embaralharCartas(b);
    b->printCartas();
    for (int i = 0; i < 53; i++){
        if (b)
            const Carta* c = dealer.puxarCarta(b);
            std::cout << std::endl; 
            std::cout << "A carta ";
            c->printCarta();
            std::cout << " foi puxada do baralho.\n\n";
    }
}
/* IMPLEMENTAR>>>>>> Baralho::adicionarCarta(), Dealer::limparMesa(), Dealer::resetBaralho(), Agente::removerCarta()
*/