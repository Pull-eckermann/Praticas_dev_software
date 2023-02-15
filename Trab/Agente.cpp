#include "Agente.hpp"

#include <iostream>

Agente::Agente(){}

Agente::Agente(const unsigned int fichas){
    this->carteira.setFichas(fichas);
}

Agente::~Agente(){
}

const std::list<Carta*>& Agente::getCartas() const{
    return cartas;
}

unsigned int Agente::getSaldo() const{
    return carteira.getFichas();
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
    std::list<Carta*>::iterator it{this->cartas.begin()};
    while(it != cartas.end())
        it = cartas.erase(it);
    this->cartas.clear();
}

void Agente::adicionarCarta(Carta *carta){
    if(carta == nullptr)
        throw std::invalid_argument{"Não se pode adicionar uma carta nula ao agente"};
    this->cartas.push_back(carta);
}