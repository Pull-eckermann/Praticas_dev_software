#include "Dealer.hpp"
#include "Baralho.hpp"
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include <utility>


Dealer::Dealer(const unsigned int fichas)
    :Agente{fichas}{
}

Dealer::~Dealer(){}

void Dealer::colherAposta(const unsigned int total){
    this->carteira.adicionarFichas(total);
}

void Dealer::entregarRecompensas(const unsigned int total){
    this->carteira.sacarFichas(total);
}

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
    if(b->isEmpty()) //Se o baralho estiver vazio retorna NULL
        return nullptr;
    Carta* carta = b->getCartas().back();
    b->cartas.pop_back();
    return carta;
}

void Dealer::mostrarMao(){
    std::list<Carta*>::iterator it;
    if(cartas.size() == 2){
        std::cout << "******* ";
        it = cartas.begin();
        ++it;
        (*it)->printCarta();
    }else
        for (it = cartas.begin() ; it != cartas.end(); ++it){
            (*it)->printCarta();
            std::cout << " ";
        }
    std::cout << std::endl;
}