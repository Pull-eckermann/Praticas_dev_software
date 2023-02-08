#include "Agente.hpp"

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