#include "Mesa.hpp"

Mesa::Mesa(){}

Mesa::Mesa(Dealer dealer, Baralho *baralho, Baralho *descarte)
    :dealer{dealer}, baralho{baralho}, descarte{descarte}{
}

Mesa::~Mesa(){
}

void Mesa::addJogador(Jogador *jogador){
    this->jogadores.push_back(jogador);
}

void Mesa::removeJogador(Jogador *jogador){
    this->jogadores.remove(jogador);
}

const std::list<Jogador*>& Mesa::getJogadores() const{
    return jogadores;
}