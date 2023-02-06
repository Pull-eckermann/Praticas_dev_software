#ifndef DEALER_HPP 
#define DEALER_HPP

class Baralho;

class Dealer {
    public:
        Dealer();
        ~Dealer();

        void embaralharCartas(Baralho* b);

        //const Carta puxarCarta(Baralho* b) const; //dá um getCarta na última posição das cartas do baralho, como se tivesse puxando uma carta de cima
                                                    //e move essa carta pra algum lugar da mesa, removendo essa carta do final do baralho.

    private:
    


};
#endif