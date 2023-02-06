#include <iostream>
#include "Baralho.hpp"
#include "Carta.hpp"
#include "Dealer.hpp"

int main(){
    Baralho* b{new Baralho};
    Dealer dealer;
    b->printCartas();
    dealer.embaralharCartas(b);
    b->printCartas();
}
