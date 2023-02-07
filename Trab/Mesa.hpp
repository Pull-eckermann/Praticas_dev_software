#ifndef MESA_HPP 
#define MESA_HPP

#include "Jogador.hpp"
#include "Dealer.hpp"
#include "Baralho.hpp"
#include <list>

class Mesa {
  public:
    Mesa();
    Mesa(Dealer dealer, Baralho baralho);
    virtual ~Mesa();

    void addJogador(Jogador *jogador);
    void removeJogador(Jogador *jogador);
    const std::list<Jogador*>& getJogadores() const;

  private:
    Dealer dealer;
    Baralho* baralho;
    Baralho* descarte;
    std::list<Jogador*> jogadores;
    
};
#endif
