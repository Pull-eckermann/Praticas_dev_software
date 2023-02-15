#include "Jogador.hpp"

Jogador::Jogador(){
}

Jogador::Jogador(const std::string nick, const unsigned int fichas)
    :Agente{fichas}{
    setNick(nick);
}

Jogador::~Jogador(){
}

const std::string Jogador::getNick() const{
    return nick;
}

void Jogador::setNick(const std::string nick){
    this->nick = nick;
}

//Jogadas que um jogador pode fazer
void Jogador::apostar(unsigned int fichas){
    this->carteira.sacarFichas(fichas);
}

void Jogador::Stand(){} //Não faz nada

void Jogador::Hit(Carta *carta){ //Jogador recebe mais uma carta
    adicionarCarta(carta);
}

void Jogador::Dobrar(Carta *carta){
    if(this->cartas.size() == 2){
        adicionarCarta(carta);
        //sacarFichas();
    }

}

void Jogador::Surrender(){

}

std::ostream& operator<<(std::ostream& stream, const Jogador& jogador){
    stream << "|Jogador: "<< jogador.getNick() << "\n";
    stream << "|Fichas: " << jogador.getSaldo() << "\n";
    return stream;
}