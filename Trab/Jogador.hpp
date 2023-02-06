#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>
#include "Agente.hpp"

class Jogador : public Agente {
  public:
    Jogador(std::string nick, unsigned int fichas);
    virtual ~Jogador();

    std::string getNick() const;
    void setNick(const std::string nick);

    //Jogadas que um jogador pode fazer
    void Stand();
    void Hit();
    void Dobrar();
    void Split();
    void Surrender();

  private:
    std::string nick;
};
#endif