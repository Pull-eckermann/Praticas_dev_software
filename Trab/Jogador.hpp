#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>
#include "Agente.hpp"

class Jogador : public Agente{
  public:
    Jogador();
    Jogador(std::string nick, unsigned int fichas);
    virtual ~Jogador();

    const std::string getNick() const;
    void setNick(const std::string nick);

    //Jogadas que um jogador pode fazer
    void Stand();
    void Hit(Carta *carta);
    void Dobrar(Carta *carta);
    void Split();
    void Surrender();

  private:
    std::string nick;
};
#endif