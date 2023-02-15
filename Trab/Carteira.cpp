#include "Carteira.hpp"
#include <stdexcept>

Carteira::Carteira(){}

Carteira::Carteira(const unsigned int fichas):fichas{fichas}{
}

const unsigned int Carteira::getFichas() const{
    return fichas;
}

void Carteira::setFichas(const unsigned int fichas){
    this->fichas = fichas;
}

void Carteira::adicionarFichas(const unsigned int fichas){
    this->fichas += fichas;
}

//Remove da carteira a quantia indicada e retorna ela em const
const unsigned int Carteira::sacarFichas(const unsigned int fichas){
    if(fichas > this->fichas)
        throw std::invalid_argument{"Impossivel sacar mais fichas do que possui"};
    this->fichas -= fichas;
    return fichas;
}

const unsigned int Carteira::sacarTudo(){
    unsigned int aux{fichas};
    fichas = 0;
    return aux;
}