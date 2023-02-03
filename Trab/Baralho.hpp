#ifndef BARALHO_HPP
#define BARALHO_HPP

#include "Carta.hpp"
#include <vector>

class Baralho{
  public:
    Baralho();
    ~Baralho();

    const std::vector<Carta*>& getCartas() const;

    void setupCartas();

    void printCartas();

    
    unsigned int getTamanho() const;

    std::vector<Carta*> cartas;
  private:
    unsigned int tamanho;


};
#endif