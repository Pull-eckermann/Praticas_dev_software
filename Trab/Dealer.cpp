#include "Dealer.hpp"
#include "Baralho.hpp"
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include <utility>

Dealer::Dealer(){}

Dealer::Dealer(unsigned int fichas){
    this->carteira.setFichas(fichas);
}

Dealer::~Dealer(){}

void Dealer::limparMesa(std::list<Jogador*> listaJogadores){
    for (std::list<Jogador*>::iterator it{listaJogadores.begin()}; it != listaJogadores.end(); ++it){
        (*it)->limparMao();
    }
    this->limparMao();
}

void Dealer::embaralharCartas(Baralho* b) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(b->cartas), std::end(b->cartas), std::default_random_engine(seed));
}

Carta* Dealer::puxarCarta(Baralho* b) const {
    if(b->getCartas().empty()) //Se o baralho estiver vazio retorna NULL
        return nullptr;
    Carta* carta = b->getCartas().back();
    b->cartas.pop_back();
    return carta;
}