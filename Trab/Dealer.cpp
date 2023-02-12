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

/*void Dealer::limparMesa(std::list<Jogador*> listaJogadores){
    if (listaJogadores.size() == 0)
        std::cout << "A mesa nao possui jogadores.";
    else{
        for (int i = 0; i < listaJogadores.size(); i++){
            listaJogadores[i].limparMao();
        }
    }
    dealer.limparMao();
}

Agente::limparMao(){
    //while (!getCartas().empty())
        descarte.adicionarCarta(this->removerCarta());
        
}

*/

void Dealer::embaralharCartas(Baralho* b) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(b->cartas), std::end(b->cartas), std::default_random_engine(seed));
}

Carta* Dealer::puxarCarta(Baralho* b) const {
    Carta* carta = b->getCartas().back();
    b->cartas.pop_back();
    return carta;
}