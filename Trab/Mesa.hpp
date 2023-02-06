#ifndef MESA_HPP 
#define MESA_HPP

#include "Jogador.hpp"
#include "Dealer.hpp"
#include "Baralho.hpp"
#include <list>

class Mesa {
  public:
    Mesa();
    Mesa(Dealer dealer, Baralho baralho, std::vector<Jogador*> jogadores);


  private:
    Dealer dealer;
    Baralho baralho;
    std::vector<Jogador*> jogadores;
    
};
#endif