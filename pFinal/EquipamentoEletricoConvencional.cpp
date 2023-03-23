#include "EquipamentoEletricoConvencional.hpp"

using namespace erick;
        
EquipamentoEletricoConvencional::EquipamentoEletricoConvencional(const std::string nome, const double u, const double i)
    : EquipamentoEletrico{nome}, u{u}, i{i}{
}

void EquipamentoEletricoConvencional::setTensao(const double u){
    this->u = u;
}

double EquipamentoEletricoConvencional::getTensao() const{
    return this->u;
}

void EquipamentoEletricoConvencional::setCorrente(const double i){
    this->i = i;
}

double EquipamentoEletricoConvencional::getCorrente() const{
    return this->i;
}

double EquipamentoEletricoConvencional::calculaPotencia() const{
    return i * u; //Corrente * Tensao
}
