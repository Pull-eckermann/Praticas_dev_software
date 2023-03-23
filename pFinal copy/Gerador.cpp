#include "Gerador.hpp"


using namespace erick;

Gerador::Gerador(const std::string fabricante, const double capacidade)
    :fabricante{fabricante}, capacidade{capacidade}{
}

Gerador::~Gerador(){

}

void Gerador::setFabricante(const std::string fabricante){
    this->fabricante = fabricante;
}

std::string Gerador::getFabricante() const{
    return this->fabricante;
}

void Gerador::setCapacidade(const double capacidade){
    this->capacidade = capacidade;
}

double Gerador::getCapacidade() const{
    return this->capacidade;
}

void Gerador::adicionarEquipamento(EquipamentoEletrico *equipamento){
    double potencia_t;
    potencia_t = this->calculaPotenciaTotal() + equipamento->calculaPotencia();
    if(potencia_t > this->capacidade)
        throw std::runtime_error{"Potencia exedida ao tentar adicionar outro equipamento"};
    this->equipamentos.push_back(equipamento);
}

double Gerador::calculaPotenciaTotal() const{
    std::list<EquipamentoEletrico*>::const_iterator it{this->equipamentos.begin()};
    double soma{0};
    for( ;it != this->equipamentos.end(); ++it)
        soma+= (*it)->calculaPotencia();
    return soma;
}