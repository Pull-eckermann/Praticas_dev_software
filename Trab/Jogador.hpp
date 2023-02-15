#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>
#include <iostream>
#include "Agente.hpp"

class Jogador : public Agente{
  friend std::ostream& operator<<(std::ostream& stream, const Jogador& jogador);
  public:
    Jogador();
    Jogador(std::string nick, unsigned int fichas);
    virtual ~Jogador();

    const std::string getNick() const;
    void setNick(const std::string nick);
    
    const int getApostaAtual() const;
    void setApostaAtual(const int apostaAtual);

    //Jogadas que um jogador pode fazer
    void apostar(unsigned int fichas);
    void stand();
    void hit(Carta *carta);
    void dobrar(Carta *carta);
    void surrender();

  private:
    std::string nick;
    int apostaAtual;
};
#endif