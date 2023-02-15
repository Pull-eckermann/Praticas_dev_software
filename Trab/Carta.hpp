#ifndef CARTA_HPP
#define CARTA_HPP

class Carta{
  public:
    Carta(const unsigned short int nome, const unsigned short int naipe, const unsigned short int valor);
    ~Carta() = default;

    const unsigned short int getNome() const;
    void setNome(unsigned short int nome);

    const unsigned short int getNaipe() const;
    void setNaipe(unsigned short int naipe);

    const unsigned short int getValor() const;
    void setValor(unsigned short int valor);

    void printCarta() const;

  private:
    unsigned char nome;
    unsigned char naipe;
    unsigned char valor;
};
#endif