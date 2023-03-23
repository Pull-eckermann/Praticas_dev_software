#ifndef EQUIPAMENTO_ELETRICO_HPP
#define EQUIPAMENTO_ELETRICO_HPP

#include <string>

namespace erick{
class EquipamentoEletrico{
    public:
        EquipamentoEletrico(const std::string nome);
        virtual ~EquipamentoEletrico() =  default;

        void setNome(const std::string nome);
        std::string getNome() const;

        virtual double calculaPotencia() const;
    protected:
        std::string nome;
};
}
#endif