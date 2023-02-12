#include "Agente.hpp"

#include <iostream>

Agente::Agente(){}

Agente::Agente(unsigned int fichas){
    carteira.setFichas(fichas);
}

Agente::~Agente(){
}

Carteira Agente::getCarteira() const{
    return carteira;
}

const std::list<Carta*>& Agente::getCartas() const{
    return cartas;
}

void Agente::mostrarMao(){
    std::list<Carta*>::iterator it{this->cartas.begin()};
    std::cout << "\nMao atual: ";
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

Carta* Agente::removerCarta(){
    if(!this->cartas.empty()){
        Carta* carta = this->cartas.back();
        this->cartas.pop_back();
        return carta;
    }else
        return nullptr;
}