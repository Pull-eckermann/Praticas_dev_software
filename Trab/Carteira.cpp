#include "Carteira.hpp"

Carteira::Carteira() {}

Carteira::Carteira(unsigned int fichas){
    this->setFichas(fichas);
}

virtual Carteira::~Carteira() {}

unsigned int Carteira::getFichas() const{
    return fichas;
}

void Carteira::setFichas(unsigned int fichas){
    if(fichas > 0)
        this->fichas = fichas; //Lembre-se de adicionar uma exeção aqui depois
}

void Carteira::adicionarFichas(unsigned int fichas){
    this->fichas += fichas;
}

void Carteira::sacarFichas(unsigned int fichas){
    if(fichas <= this->fichas)
        this->fichas -= fichas; //Lembrar de lançar exeção quando saca mais do que tem
}