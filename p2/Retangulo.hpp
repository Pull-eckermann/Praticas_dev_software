#ifndef RETANGULO_HPP
#define RETANTULO_HPP

#include "Forma.hpp"

namespace erick{
class Retangulo : public Forma{
    public:
        Retangulo(const double altura, const double largura);
        virtual ~Retangulo() =  default;

        void setAltura(const double altura);
        void setLargura(const double largura);

        double getAltura() const;
        double getLargura() const;

        virtual double calcularArea() const override;
    private:
        double altura;
        double largura;
};
}
#endif