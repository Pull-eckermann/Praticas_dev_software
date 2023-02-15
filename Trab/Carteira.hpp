#ifndef CARTEIRA_HPP 
#define CARTEIRA_HPP


class Carteira {
  public:
    Carteira();
    Carteira(const unsigned int fichas);
    virtual ~Carteira() = default;

    const unsigned int getFichas() const;
    void setFichas(const unsigned int fichas);

    void adicionarFichas(const unsigned int fichas);
    const unsigned int sacarFichas(const unsigned int fichas);
    const unsigned int sacarTudo();

  private:
    unsigned int fichas;
};
#endif