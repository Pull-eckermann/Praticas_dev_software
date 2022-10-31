#include "Retangulo.hpp"
#include <cmath>

int Retangulo:: calculaArea(){
  return h * w;
}

int Retangulo:: calculaPerimetro(){
  return (h*2) + (w)*2;
}

double Retangulo:: calculaDiagonal(){
  int aux;
  aux = (h*h) + (w*w);
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

Retangulo:: Retangulo(){
  w = 0;
  h = 0;
}

Retangulo:: Retangulo(int altura , int largura){
  setAltura(altura);
  setLargura(largura);
}