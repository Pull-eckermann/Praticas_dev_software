#ifndef DEALER_HPP 
#define DEALER_HPP

#include "Carta.hpp"
//#include "Agente.hpp"
#include "Jogador.hpp"

class Baralho;

class Dealer : public Agente{
    public:
        Dealer();
        Dealer(unsigned int fichas);
        virtual ~Dealer();

        void limparMesa();
        Carta* puxarCarta(Baralho* b) const;

        void embaralharCartas(Baralho* b);
};
#endif