#ifndef BARALHO_HPP
#define BARALHO_HPP

#include "Carta.hpp"
#include <list>

class Baralho{
  public:
    Baralho();
    ~Baralho();

    const std::list<Carta*>& getCartas() const;

    
    unsigned int getTamanho() const;

  private:
    std::list<Carta*> cartas;
    unsigned int tamanho;


};
#endif