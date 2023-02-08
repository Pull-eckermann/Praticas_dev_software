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
        const Carta* puxarCarta(Baralho* b) const;

        void resetaBaralho(Baralho* b, Baralho* descarte);
        void embaralharCartas(Baralho* b);
};
#endif