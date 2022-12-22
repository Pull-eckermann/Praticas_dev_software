#ifndef CIRCULO_H
#define CIRCULO_H

#include "Forma.hpp"

class Circulo : public Forma{
	public:
        Circulo (unsigned long raio);
        virtual ~Circulo() = default;

        virtual unsigned long calculaArea() const;

        unsigned long getRaio() const;
        void setRaio(unsigned long raio);

    private:
        unsigned long raio;
        const double pi;
};
#endif