#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "Carteira.hpp"
#include "Carta.hpp"
#include <string>
#include <list>

class Jogador {
  public:
    Jogador(std::string nick, unsigned int fichas);
    ~Jogador();

    std::string getNick() const;

    //Jogadas que um jogador pode fazer
    void Stand();
    void Hit();
    void Dobrar();
    void Split();
    void Surrender();

    unsigned int getSaldo() const;
    const std::list<Carta*>& getMao() const;
    void adicionarCarta(Carta &carta);

  private:
    std::string nick;
    Carteira carteira;
    std::list<Carta*> cartas;
};
#endif