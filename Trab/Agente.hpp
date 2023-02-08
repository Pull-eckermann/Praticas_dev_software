#ifndef AGENTE_HPP
#define AGENTE_HPP

#include "Carteira.hpp"
#include "Carta.hpp"
#include <list>

class Agente {
  public:
    Agente();
    Agente(unsigned int fichas);
    virtual ~Agente();

    Carteira getCarteira() const;
    
    const std::list<Carta*>& getCartas() const;
    void adicionarCarta(Carta *carta);
    Carta *removerCartas();

  protected:
    Carteira carteira;
    std::list<Carta*> cartas;

};
#endif
