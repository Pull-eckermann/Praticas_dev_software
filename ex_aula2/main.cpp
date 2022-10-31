#include <iostream>
#include "Retangulo.hpp"

int main(){
  Retangulo ret;
  std::cout << "Didite a altura do Retangulo: ";
  std::cin >> ret.h;
  std::cout << "Didite a largura do Retangulo: ";
  std::cin >> ret.w;

  std::cout<< "Area do retangulo: " << ret.calculaArea(ret) << std::endl;
  std::cout<< "Perimetro do retangulo: " << ret.calculaPerimetro(ret) << std::endl;
  std::cout<< "Diagonal do retangulo: " << ret.calculaDiagonal(ret) << std::endl; 


	return 0;
}
