#ifndef AGENTE_HPP
#define AGENTE_HPP

#include <stdexcept>
#include <list>

#include "Carteira.hpp"
#include "Carta.hpp"
#include "Baralho.hpp"

class Agente {
  public:
    Agente();
    Agente(const unsigned int fichas);
    virtual ~Agente();

    unsigned int getSaldo() const;
    const std::list<Carta*>& getCartas() const;

    const unsigned short valorMao();
    virtual void mostrarMao();
    void limparMao();
    void adicionarCarta(Carta *carta);

  protected:
    Carteira carteira;
    std::list<Carta*> cartas;

};
#endif
