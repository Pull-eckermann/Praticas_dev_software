#include "Retangulo.hpp"

using namespace erick;

Retangulo::Retangulo(const double altura, const double largura):Forma{},altura{altura},largura{largura}{

}

void Retangulo::setAltura(const double altura){
    if(altura < 0.0)
        throw ArgumentoNegativoEx{altura};
    this->altura = altura;
}

void Retangulo::setLargura(const double largura){
    if(largura < 0.0)
        throw ArgumentoNegativoEx{largura};
    this->largura = largura;
}

double Retangulo::getAltura() const{
    return this->altura;
}

double Retangulo::getLargura() const{
    return this->largura;
}

double Retangulo::calcularArea() const{
    return this->largura*this->altura;
}