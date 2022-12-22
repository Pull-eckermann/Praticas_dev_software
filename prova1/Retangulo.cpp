#include "Retangulo.hpp"

Retangulo::Retangulo (unsigned long h, unsigned long w){
  setAltura(h);
  setLargura(w);
}
        
unsigned long Retangulo::calculaArea() const{
  return getAltura() * getLargura();
}

unsigned long Retangulo::getAltura() const{
  return this->h;
}

void Retangulo::setAltura(unsigned long altura){
  if(altura > 0)
    this->h = altura;
  else
    this->h = 0;
}

unsigned long Retangulo::getLargura() const{
  return this->w;
}

void Retangulo::setLargura(unsigned long largura){
    if(largura > 0)
      this->w = largura;
    else
      this->w = 0;
}