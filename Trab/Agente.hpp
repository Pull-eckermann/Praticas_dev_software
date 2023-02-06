#ifndef AGENTE_HPP
#define AGENTE_HPP

#include "Carteira.hpp"
#include "Carta.hpp"
#include "Mesa.hpp"
#include <list>

class Agente {
  public:
    Agente(unsigned int fichas, Mesa *mesa);
    virtual ~Agente();

    Carteira getCarteira() const;
    

    const std::list<Carta*>& getMao() const;
    void adicionarCarta(Carta *carta);
    void limparMao();

  private:
    Carteira carteira;
    std::list<Carta*> cartas;
    Mesa *mesa;

};
#endif