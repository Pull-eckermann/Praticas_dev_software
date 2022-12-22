#ifndef RETANGULO_H
#define RETANGULO_H

#include "Forma.hpp"

class Retangulo : public Forma{
	public:
        Retangulo (unsigned long h, unsigned long w);
        virtual ~Retangulo() = default;
        
        virtual unsigned long calculaArea() const;

        unsigned long getAltura() const;
        void setAltura(unsigned long altura);

        unsigned long getLargura() const;
        void setLargura(unsigned long largura);

    private:
        unsigned long h;  //Altura
        unsigned long w;  //Largura
};
#endif