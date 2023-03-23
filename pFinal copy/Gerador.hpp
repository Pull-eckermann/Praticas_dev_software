#ifndef GERADOR_HPP
#define GERADOR_HPP

#include <string>
#include <list>
#include <stdexcept>
#include "EquipamentoEletrico.hpp"

namespace erick{
class Gerador{
    public:
        Gerador(const std::string fabricante, const double capacidade);
        virtual ~Gerador();

        void setFabricante(const std::string fabricante);
        std::string getFabricante() const;

        void setCapacidade(const double capacidade);
        double getCapacidade() const;

        void adicionarEquipamento(EquipamentoEletrico *equipamento);

        double calculaPotenciaTotal() const;
    private:
        std::string fabricante;
        double capacidade; //capacidade de geração, em Watts
        std::list<EquipamentoEletrico*> equipamentos;

};
}
#endif