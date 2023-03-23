#include "EquipamentoEletricoResistivo.hpp"

using namespace erick;
        
EquipamentoEletricoResistivo::EquipamentoEletricoResistivo(const std::string nome, const double r, const double i)
    : EquipamentoEletrico{nome}, r{r}, i{i}{
}

void EquipamentoEletricoResistivo::setResistencia(const double r){
    this->r = r;
}

double EquipamentoEletricoResistivo::getResistencia() const{
    return this->r;
}

void EquipamentoEletricoResistivo::setCorrente(const double i){
    this->i = i;
}

double EquipamentoEletricoResistivo::getCorrente() const{
    return this->i;
}

double EquipamentoEletricoResistivo::calculaPotencia() const{
    return ((r * i) * i); //Corrente * Tensao
}