#ifndef EQUIPAMENTO_ELETRICO_RESISTIVO_HPP
#define EQUIPAMENTO_ELETRICO_RESISTIVO_HPP

#include "EquipamentoEletrico.hpp"
#include <string>

namespace erick{
class EquipamentoEletricoResistivo : public EquipamentoEletrico{
    public:
        EquipamentoEletricoResistivo(const std::string nome, const double r, const double i);
        virtual ~EquipamentoEletricoResistivo() =  default;

        void setResistencia(const double r);
        double getResistencia() const;

        void setCorrente(const double i);
        double getCorrente() const;

        virtual double calculaPotencia() const override;
    private:
        double r; //Resistência
        double i; //Corrente
};
}
#endif