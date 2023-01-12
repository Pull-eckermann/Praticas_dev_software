#ifndef CARTA_HPP
#define CARTA_HPP

class Carta{
  public:
    Carta(const char naipe, const char simbolo);
    ~Carta();

    char getNaipe() const;
    char getSimbolo() const;

  private:
    char naipe;
    char simbolo;
};
#endif