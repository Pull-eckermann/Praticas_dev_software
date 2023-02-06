#include "Agente.hpp"

Agente::Agente(unsigned int fichas, Mesa *mesa)
    :this->mesa = mesa{
    carteira.setFichas(fichas);
}

virtual Agente::~Agente(){
}

Carteira Agente::getCarteira() const{
    return carteira;
}

const std::list<Carta*>& Agente::getMao() const{
    return cartas;
}

void Agente::adicionarCarta(Carta *carta){
    this->cartas.push_back(carta);
}

void Agente::limparMao(){
    //Falta fazer ainda
}