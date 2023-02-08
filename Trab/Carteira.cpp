#include "Carteira.hpp"

Carteira::Carteira() {}

Carteira::Carteira(const unsigned int fichas):fichas{fichas}{
}

Carteira::~Carteira() {}

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
    if(fichas <= this->fichas){
        this->fichas -= fichas;
        return fichas;
    }else{
        unsigned int aux = this->fichas;
        this->fichas = 0;
        return aux;
    }
}