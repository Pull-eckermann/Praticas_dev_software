#include "Agente.hpp"

#include <iostream>

Agente::Agente(){}

Agente::Agente(unsigned int fichas){
    carteira.setFichas(fichas);
}

Agente::~Agente(){
}

const std::list<Carta*>& Agente::getCartas() const{
    return cartas;
}

unsigned int Agente::getSaldo() const{
    return this->carteira.getFichas();
}

void Agente::mostrarMao(){
    std::list<Carta*>::iterator it{this->cartas.begin()};
    for ( ; it != cartas.end(); it++){
        (*it)->printCarta();
        std::cout << " ";
    }
    std::cout << std::endl;
}

void Agente::limparMao(){
    this->cartas.clear();
}

void Agente::adicionarCarta(Carta *carta){
    this->cartas.push_back(carta);
}