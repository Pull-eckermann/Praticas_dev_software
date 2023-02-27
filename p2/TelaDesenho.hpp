#ifndef TELA_DESENHO_HPP
#define TELA_DESENHO_HPP

#include <list>
#include <memory>

#include "Forma.hpp"

namespace erick{
class TelaDesenho{
    public:
        TelaDesenho();
        virtual ~TelaDesenho() =  default;

        void adicionarForma(std::shared_ptr<const Forma> forma);

        double calcularAreaTotal() const;
    private:
        std::list<std::shared_ptr<const Forma>> *formas;
};
}
#endif