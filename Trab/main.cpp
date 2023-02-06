#include <iostream>
#include "Baralho.hpp"
#include "Carta.hpp"
#include "Dealer.hpp"

int main(){
    Baralho* b{new Baralho};
    Dealer dealer;
    dealer.embaralharCartas(b);
    b->printCartas();
    const Carta* c = dealer.puxarCarta(b);
    std::cout << std::endl; 
    std::cout << "A carta ";
    c->printCarta();
    std::cout << " foi puxada do baralho.\n\n";
    b->printCartas();
}
