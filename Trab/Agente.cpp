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

const unsigned short Agente::valorMao(){
    std::list<Carta*>::iterator it{this->cartas.begin()};
    unsigned short valorTotal{0};
    bool temAs{false};
    for ( ; it != cartas.end(); it++){
        if ((*it)->getValor() == 11)
            temAs = true;
        valorTotal += (*it)->getValor();
    }
    if (temAs && (valorTotal > 21))
        return valorTotal - 10;
    return valorTotal;
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
    std::cout << "\ndentro de limpar mao. Cartas: ";
    mostrarMao();
    this->cartas.clear();
}

void Agente::adicionarCarta(Carta *carta){
    this->cartas.push_back(carta);
}