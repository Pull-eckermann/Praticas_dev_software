#include "Retangulo.hpp"
#include <cmath>

int Retangulo:: calculaArea(Retangulo ret){
  return ret.h * ret.w;
}

int Retangulo:: calculaPerimetro(Retangulo ret){
  return (ret.h*2) + (ret.w)*2;
}

double Retangulo:: calculaDiagonal(Retangulo ret){
  int aux;
  aux = (ret.h*ret.h) + (ret.w*ret.w);
  return sqrt(aux);
}

//Gets e seters
int Retangulo::getAltura(){
  return h;
}

void Retangulo::setAltura(int altura){
  if(altura > 0)
    h = altura;
  else
    h = 0;
}

int Retangulo::getLargura(){
  return w;
}

void Retangulo::setLargura(int largura){
  if(largura > 0)
    w = largura;
  else
    w = 0;
}
