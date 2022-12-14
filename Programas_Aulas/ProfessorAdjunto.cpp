#include "ProfessorAdjunto.hpp"

unsigned int ProfessorAdjunto::getSalario() const{
    return Professor::getSalario() * 1.1;
}

std::string ProfessorAdjunto::getPesquisa() const{
    return this->l_pesquisa;
}

void ProfessorAdjunto::setPesquisa(std::string l_pesquisa){
    this->l_pesquisa = l_pesquisa;
}