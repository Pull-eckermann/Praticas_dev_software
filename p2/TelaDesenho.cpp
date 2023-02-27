#include "TelaDesenho.hpp"
  
using namespace erick;

TelaDesenho::TelaDesenho(){}

void TelaDesenho::adicionarForma(std::shared_ptr<const Forma> forma){
    this->formas->push_back(forma);
}

double TelaDesenho::calcularAreaTotal() const{
    std::list<std::shared_ptr<Forma>>::const_iterator it{this->formas->begin()};
    double soma{0};
    for( ;it != this->formas.end(); ++it)
        soma+= (*it)->calcularArea();
    return soma;
}