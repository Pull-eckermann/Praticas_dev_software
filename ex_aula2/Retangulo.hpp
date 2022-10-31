#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
	public:
    int calculaArea(Retangulo ret); 
    int calculaPerimetro(Retangulo ret);
    double calculaDiagonal(Retangulo ret);

    int h;  //Altura
    int w;  //Largura
};
#endif