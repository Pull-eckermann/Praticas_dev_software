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

const std::list<Carta*>& Agente::getMao() const{
    return cartas;
}

void Agente::adicionarCarta(Carta *carta){
    this->cartas.push_back(carta);
}

    void removerCarta(){
        //if (not empty)
        //    remove_ultima_carta
        //retorna_carta_removida
}