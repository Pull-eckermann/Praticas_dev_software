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

const int Jogador::getApostaAtual() const{
    return apostaAtual;
}

void Jogador::setApostaAtual(const int apostaAtual){
    this->apostaAtual = apostaAtual;
}

//Jogadas que um jogador pode fazer
void Jogador::apostar(unsigned int fichas){
    this->carteira.sacarFichas(fichas);
}

void Jogador::stand(){} //Não faz nada

void Jogador::hit(Carta *carta){ //Jogador recebe mais uma carta
    adicionarCarta(carta);
}

void Jogador::dobrar(Carta *carta){
    if(this->cartas.size() == 2){
        adicionarCarta(carta);
        //sacarFichas();
    }

}

void Jogador::surrender(){

}

std::ostream& operator<<(std::ostream& stream, const Jogador& jogador){
    stream << "|Jogador: "<< jogador.getNick() << "\n";
    stream << "|Fichas: " << jogador.getSaldo() << "\n";
    return stream;
}