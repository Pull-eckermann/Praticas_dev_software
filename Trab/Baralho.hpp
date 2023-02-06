#ifndef BARALHO_HPP
#define BARALHO_HPP

#include "Carta.hpp"
#include <vector>

class Baralho{
  friend class Dealer;
  public:
    Baralho();
    ~Baralho();

    const std::vector<Carta*>& getCartas() const;
    void setupCartas();
    void printCartas();

    unsigned int getTamanho() const;

  private:
    std::vector<Carta *> cartas;
    unsigned int tamanho;

};
#endif