#ifndef CARTEIRA_HPP 
#define CARTEIRA_HPP


class Carteira {
  public:
    Carteira(const unsigned int fichas);
    ~Carteira();

    unsigned int getFichas() const;
    void setFichas(unsigned int fichas);

    void adicionarFichas(unsigned int fichas);
    void sacarFichas(unsigned int fichas);

  private:
    unsigned int fichas;
};
#endif