#include "Mesa.hpp"

#include <iostream>

Mesa::Mesa(){}

Mesa::Mesa(Dealer dealer, Baralho *baralho)
    :dealer{dealer}, baralho{baralho}{
}

Mesa::~Mesa(){
}

//void Mesa::setupRodada(){}

void Mesa::addJogador(Jogador *jogador){
    this->jogadores.push_back(jogador);
}

void Mesa::removeJogador(Jogador *jogador){
    this->jogadores.remove(jogador);
}

std::list<Jogador*>& Mesa::getJogadores(){
    return this->jogadores;
}

const void Mesa::printJogadores() {
    std::list<Jogador*>::iterator it{this->jogadores.begin()};
    for ( ; it != jogadores.end(); ++it){
        std::cout << (*it)->getNick() << " ";
    }
    std::cout << std::endl;
}