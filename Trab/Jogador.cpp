#include "Jogador.hpp"

Jogador::Jogador(){
}

Jogador::Jogador(std::string nick, unsigned int fichas)
    :Agente{fichas}{
    this->nick = nick;
}

Jogador::~Jogador(){
}

std::string Jogador::getNick() const{
    return nick;
}

void Jogador::setNick(const std::string nick){
    this->nick = nick;
}

//Jogadas que um jogador pode fazer
void Jogador::Stand(){

}

void Jogador::Hit(){

}

void Jogador::Dobrar(){

}

void Jogador::Split(){

}

void Jogador::Surrender(){

}