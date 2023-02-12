#include <iostream>
#include <vector>

#include "Baralho.hpp"
#include "Carta.hpp"
#include "EnumNaipeCarta.hpp"
#include "EnumNomeCarta.hpp"

Baralho::Baralho(){
}

Baralho::Baralho(unsigned int tamanho){
    setupCartas(tamanho);
}

const std::vector<Carta*>& Baralho::getCartas() const{
    return this->cartas;
}

void Baralho::adicionarCarta(Carta* carta){
    this->cartas.push_back(carta);
}

void Baralho::setupCartas(unsigned int tamanho){
    for (unsigned int t = 1; t<= tamanho; t++)
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

    unsigned int Baralho::getTamanho() const{
        return this->tamanho;
    }

Baralho::~Baralho(){}