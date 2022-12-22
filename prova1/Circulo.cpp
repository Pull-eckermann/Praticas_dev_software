#include "Circulo.hpp"

Circulo::Circulo (unsigned long raio): pi{3.14}{
    setRaio(raio);
}

unsigned long Circulo::calculaArea() const{
    return (unsigned long) pi*raio*raio;
}

unsigned long Circulo::getRaio() const{
    return this->raio;
}

void Circulo::setRaio(unsigned long raio){
    if(raio > 0)
        this->raio = raio;
    else
        this->raio = 0;
}