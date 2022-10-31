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