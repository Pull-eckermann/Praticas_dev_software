#include <iostream>
#include "Retangulo.hpp"

int main(){
  int altura;
  int largura;

  std::cout << "Didite a altura do Retangulo: ";
  std::cin >> altura;

  std::cout << "Didite a largura do Retangulo: ";
  std::cin >> largura;
  Retangulo ret(altura,largura);

  std::cout << "Altura do retangulo: " << ret.getAltura() << std::endl;
  std::cout << "Largura do retangulo: " << ret.getLargura() << std::endl;
  std::cout<< "Area do retangulo: " << ret.calculaArea() << std::endl;
  std::cout<< "Perimetro do retangulo: " << ret.calculaPerimetro() << std::endl;
  std::cout<< "Diagonal do retangulo: " << ret.calculaDiagonal() << std::endl; 


	return 0;
}
