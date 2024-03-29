#ifndef DEALER_HPP 
#define DEALER_HPP

#include "Carta.hpp"
#include "Jogador.hpp"

class Baralho;

class Dealer : public Agente{
    public:
        Dealer();
        Dealer(const unsigned int fichas);
        virtual ~Dealer();

        void colherAposta(const unsigned int total);
        void entregarRecompensas(const unsigned int total);

        void limparMesa(std::list<Jogador*> listaJogadores);

        Carta* puxarCarta(Baralho* b) const;
        void embaralharCartas(Baralho* b);

        virtual void mostrarMao() override;
};
#endif