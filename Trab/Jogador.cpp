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

void Jogador::setApostaAtual(const unsigned int apostaAtual){
    this->apostaAtual = apostaAtual;
}

//Jogadas que um jogador pode fazer
void Jogador::apostar(const unsigned int fichas){
    this->carteira.sacarFichas(fichas);
    setApostaAtual(fichas);
}

void Jogador::ganhar(){
    this->carteira.adicionarFichas(apostaAtual * 2);
    setApostaAtual(0);
}

void Jogador::empatar(){
    this->carteira.adicionarFichas(apostaAtual);
    setApostaAtual(0);
}

void Jogador::stand(){} //Não faz nada

void Jogador::hit(Carta *carta){ //Jogador recebe mais uma carta
    adicionarCarta(carta);
}

void Jogador::dobrar(Carta *carta){
    if(this->cartas.size() == 2){
        this->adicionarCarta(carta);
        this->carteira.sacarFichas(apostaAtual);
        setApostaAtual(apostaAtual * 2);
    }

}

void Jogador::surrender(){
    setApostaAtual(apostaAtual / 2);
}

std::ostream& operator<<(std::ostream& stream, Jogador& jogador){
    stream << "|Jogador: "<< jogador.getNick() << "\n";
    stream << "|Fichas: " << jogador.getSaldo() << "\n";
    stream << "|Pontuacao: " << jogador.valorMao() << "\n";
    return stream;
}