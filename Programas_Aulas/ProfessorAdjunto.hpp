#ifndef PROFESSORADJUNTO_HPP
#define PROFESSORADJUNTO_HPP

#include "Professor.hpp"
#include <string>

class ProfessorAdjunto : public Professor{
    public:
        using Professor::Professor;

        unsigned int getSalario() const;

        std::string getPesquisa() const;
        void setPesquisa(std::string l_pesquisa);

    private:
        std::string l_pesquisa;
};
#endif