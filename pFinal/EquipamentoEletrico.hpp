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

        bool operator==(const EquipamentoEletrico& outro) const; //Sobrecarga do comparador de nome

        virtual double calculaPotencia() const = 0;
    protected:
        std::string nome;
};
}
#endif