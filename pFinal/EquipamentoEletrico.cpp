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

bool EquipamentoEletrico::operator==(const EquipamentoEletrico& outro) const{
    return this->nome == outro.nome;
}