#include "Dealer.hpp"
#include "Baralho.hpp"
#include <algorithm>
#include <random>
#include <chrono>

Dealer::Dealer(){}

Dealer::Dealer(unsigned int fichas){
    this->carteira.setFichas()
}

Dealer::~Dealer(){};

void Dealer::embaralharCartas(Baralho* b) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(b->cartas), std::end(b->cartas), std::default_random_engine(seed));
}

const Carta* Dealer::puxarCarta(Baralho* b) const {
    Carta* carta = b->getCartas().back();
    b->cartas.pop_back();
    return carta;
}