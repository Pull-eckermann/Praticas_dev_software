#ifndef BARALHO_HPP
#define BARALHO_HPP

#include "Carta.hpp"
#include <vector>

class Baralho{
  friend class Dealer;
  public:
    Baralho();
    Baralho(const unsigned int tamanho);
    virtual ~Baralho();

    const std::vector<Carta*>& getCartas() const;
    void setupCartas(const unsigned int tamanho);
    void printCartas();

    bool isEmpty() const;
    unsigned int getTamanho() const;

  private:
    std::vector<Carta *> cartas;
    unsigned int tamanho;

};
#endif