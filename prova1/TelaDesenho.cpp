#include <list>
#include "TelaDesenho.hpp"

TelaDesenho::TelaDesenho(){
}

void TelaDesenho::adicionarForma(Forma* forma){
    this->formas.push_back(forma);
}

const std::list<Forma*>& TelaDesenho::getFormas() const{
    return this->formas;
}

unsigned long TelaDesenho::calculaAreaTotal(){
    unsigned long a_total{0};

    std::list<Forma*>::iterator it{formas.begin()};
    for(; it!=formas.end(); it++){
        a_total += (*it)->calculaArea();
    }

    return a_total;
}