#include <iostream>
#include <vector>

#include "Baralho.hpp"
#include "Carta.hpp"
#include "EnumNaipeCarta.hpp"
#include "EnumNomeCarta.hpp"

Baralho::Baralho(){
    setupCartas();
}

const std::vector<Carta*>& Baralho::getCartas() const{
    return this->cartas;
}

void Baralho::setupCartas(){
    for (unsigned short int l = static_cast<unsigned short int>(EnumNaipeCarta::OURO); l <= static_cast<unsigned short int>(EnumNaipeCarta::PAUS); l++)
        for (unsigned short int c = static_cast<unsigned short int>(EnumNomeCarta::AS); c <= static_cast<unsigned short int>(EnumNomeCarta::REI); c++){
            this->cartas.push_back(new Carta{c, l, c});
        }
}

void Baralho::printCartas(){
    std::vector<Carta*>::iterator it{this->cartas.begin()};
    for ( ; it != cartas.end(); it++){
        (*it)->printCarta();
        std::cout << "\n";
    }
}

Baralho::~Baralho(){}