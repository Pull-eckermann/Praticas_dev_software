#include "EquipamentoEletrico.hpp"

using namespace erick;

EquipamentoEletrico::EquipamentoEletrico(const std::string nome): nome{nome}{
}

void EquipamentoEletrico::setNome(const std::string nome){
    this->nome = nome;
}

std::string EquipamentoEletrico::getNome() const{
    return this->nome;
}

double EquipamentoEletrico::calculaPotencia() const {}