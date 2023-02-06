#ifndef DEALER_HPP 
#define DEALER_HPP

#include "Carta.hpp"
#include "Agente.hpp"

class Baralho;

class Dealer : public Agente{
    public:
        Dealer();
        Dealer(unsigned int fichas);
        virtual ~Dealer();

        void embaralharCartas(Baralho* b);
        const Carta* puxarCarta(Baralho* b) const;
    private:

};
#endif