#include "Dealer.hpp"
#include "Baralho.hpp"
#include <algorithm>
#include <random>
#include <chrono>

Dealer::Dealer(){}

Dealer::Dealer(unsigned int fichas){
    this->carteira.setFichas(fichas);
}

Dealer::~Dealer(){}

void Agente::limparMesa(/*lista_jogadores*/){
    //while (!getCartas().empty() cartas_dos_jogadores not empty)
        descate.adicionarCarta(j.removerCarta());
    //while cartas_proprias not empty
        descarte.adicionarCarta(this->removerCarta());
        
}

void Dealer::embaralharCartas(Baralho* b) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(b->cartas), std::end(b->cartas), std::default_random_engine(seed));
}

const Carta* Dealer::puxarCarta(Baralho* b) const {
    if(!b->getCartas().empty()){
        Carta* carta = b->getCartas().back();
        b->cartas.pop_back();
        return carta;    
    }else
        //Lança exeção

}

void resetaBaralho(Baralho* b, Baralho* descarte){
    Baralho *aux = *b;
    *b = *descarte;
    *descarte = aux;
}