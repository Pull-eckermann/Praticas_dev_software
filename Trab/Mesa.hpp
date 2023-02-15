#ifndef MESA_HPP 
#define MESA_HPP

#include "Jogador.hpp"
#include "Dealer.hpp"
#include "Baralho.hpp"
#include <list>

class Mesa {
  public:
    Mesa();
    Mesa(Dealer *dealer, Baralho *baralho);
    virtual ~Mesa();

    void setupRodada(); //dá 2 cartas para cada jogador e o dealer
    void coletaDados();
    void rodada();

    Dealer *getDealer() const;

    Baralho* getBaralho() const;
    void setBaralho(Baralho* baralho);

    void addJogador(Jogador *jogador);
    void removeJogador(Jogador *jogador);
    std::list<Jogador*>& getJogadores();
    const void printJogadores();

  private:
    std::list<Jogador*> jogadores;
    Dealer* dealer;
    Baralho* baralho;
    
    
};
#endif
