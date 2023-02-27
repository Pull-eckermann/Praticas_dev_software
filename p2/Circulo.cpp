#include "Circulo.hpp"
#include <cmath>
     
using namespace erick;

Circulo::Circulo(const double raio):Forma{}, raio{raio}{

}

void Circulo::setRaio(const double raio){
    if(raio < 0.0)
        throw ArgumentoNegativoEx{raio};
    this->raio = raio;
}

double Circulo::getRaio() const{
    return this->raio;
}

double Circulo::calcularArea() const{
    return 2*M_PI*this->raio;
}