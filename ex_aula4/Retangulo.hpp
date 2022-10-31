#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
	public:
        Retangulo ();
        Retangulo (int h, int w);
        

        int calculaArea(); 
        int calculaPerimetro();
        double calculaDiagonal();

        int getAltura();
        void setAltura(int altura);

        int getLargura();
        void setLargura(int largura);

    private:
        int h;  //Altura
        int w;  //Largura
};
#endif