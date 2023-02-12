#ifndef AGENTE_HPP
#define AGENTE_HPP

#include "Carteira.hpp"
#include "Carta.hpp"
#include "Baralho.hpp"
#include <list>

class Agente {
  public:
    Agente();
    Agente(unsigned int fichas);
    virtual ~Agente();

    Carteira getCarteira() const;
    const std::list<Carta*>& getCartas() const;

    void mostrarMao();

    void limparMao();

    void adicionarCarta(Carta *carta);

    Carta* removerCarta();

  protected:
    Carteira carteira;
    std::list<Carta*> cartas;

};
#endif
