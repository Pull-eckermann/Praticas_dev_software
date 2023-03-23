#ifndef EQUIPAMENTO_ELETRICO_CONVENCIONAL_HPP
#define EQUIPAMENTO_ELETRICO_CONVENCIONAL_HPP

#include "EquipamentoEletrico.hpp"
#include <string>

namespace erick{
class EquipamentoEletricoConvencional : public EquipamentoEletrico{
    public:
        EquipamentoEletricoConvencional(const std::string nome, const double u, const double i);
        virtual ~EquipamentoEletricoConvencional() =  default;

        void setTensao(const double u);
        double getTensao() const;

        void setCorrente(const double i);
        double getCorrente() const;

        virtual double calculaPotencia() const override;
    private:
        double u; //Tensão
        double i; //Corrente
};
}
#endif