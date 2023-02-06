#ifndef DEALER_HPP 
#define DEALER_HPP

#include "Carta.hpp"

class Baralho;

class Dealer {
    public:
        Dealer();
        ~Dealer();

        void embaralharCartas(Baralho* b);

        const Carta* puxarCarta(Baralho* b) const;

    private:
    


};
#endif