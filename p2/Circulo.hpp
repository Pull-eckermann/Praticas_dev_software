#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"

namespace erick{
class Circulo : public Forma{
    public:
        Circulo(const double raio);
        virtual ~Circulo() =  default;

        void setRaio(const double raio);
        double getRaio() const;

        virtual double calcularArea() const override;
    private:
        double raio;
};
}
#endif