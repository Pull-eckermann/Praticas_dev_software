#include <iostream>
#include <vector>
#include <stdexcept>

#include "Baralho.hpp"
#include "Carta.hpp"
#include "EnumNaipeCarta.hpp"
#include "EnumNomeCarta.hpp"

Baralho::Baralho(){
}

Baralho::Baralho(const unsigned int tamanho){
    setupCartas(tamanho);
}

const std::vector<Carta*>& Baralho::getCartas() const{
    return this->cartas;
}

void Baralho::setupCartas(const unsigned int tamanho){
    if(tamanho > 8 || tamanho < 1)
        throw std::invalid_argument{"Tamanho do baralho deve estar entre 1 e 8"};
        
    for (unsigned int t = 1; t<= tamanho; t++)
        for (unsigned short int l = static_cast<unsigned short int>(EnumNaipeCarta::OURO); l <= static_cast<unsigned short int>(EnumNaipeCarta::PAUS); l++)
            for (unsigned short int c = static_cast<unsigned short int>(EnumNomeCarta::AS); c <= static_cast<unsigned short int>(EnumNomeCarta::REI); c++){
                this->cartas.push_back(new Carta{c, l, c});
            }
    this->tamanho = tamanho;
}

void Baralho::printCartas(){
    std::vector<Carta*>::iterator it{this->cartas.begin()};
    for ( ; it != cartas.end(); it++){
        (*it)->printCarta();
        std::cout << "\n";
    }
}

bool Baralho::isEmpty() const{
    return cartas.empty();
}

unsigned int Baralho::getTamanho() const{
    return this->tamanho;
}

Baralho::~Baralho(){}