#include <iostream>

#include "Carta.hpp"
#include "EnumNomeCarta.hpp"
#include "EnumNaipeCarta.hpp"

Carta::Carta(const unsigned short int nome, const unsigned short int naipe, const unsigned short int valor){
    this->setNome(nome);
    this->setNaipe(naipe);
    this->setValor(valor);
}

const unsigned short int Carta::getNome() const{
    return static_cast<unsigned short int>(this->nome);
}
void Carta::setNome(unsigned short int nome){
    this->nome = static_cast<unsigned char>(nome);
}

const unsigned short int Carta::getNaipe() const{
    return static_cast<unsigned short int>(this->naipe);
}
void Carta::setNaipe(unsigned short int naipe){
    this->naipe = static_cast<unsigned char>(naipe);
}

const unsigned short int Carta::getValor() const{
    return static_cast<unsigned short int>(this->valor);
}
void Carta::setValor(unsigned short int valor){
    if (valor == 11 || valor == 12 || valor == 13)
        this->valor = static_cast<unsigned char>(10);
    else if (valor == 1)
        this->valor = static_cast<unsigned char>(11);
    else
        this->valor = static_cast<unsigned char>(valor);
}

void Carta::printCarta() const{
    if (this->nome == static_cast<unsigned char>(EnumNomeCarta::AS))
        std::cout << "[A";
    else if (this->nome == static_cast<unsigned char>(EnumNomeCarta::VALETE))
        std::cout << "[J";
    else if (this->nome == static_cast<unsigned char>(EnumNomeCarta::DAMA))
        std::cout << "[Q";
    else if (this->nome == static_cast<unsigned char>(EnumNomeCarta::REI))
        std::cout << "[K";
    else
        std::cout << "[" << static_cast<unsigned short int>(this->nome);

    std::cout << " de ";

    if (this->naipe == static_cast<unsigned char>(EnumNaipeCarta::OURO))
        std::cout << "Ouros]";
    else if (this->naipe == static_cast<unsigned char>(EnumNaipeCarta::ESPADAS))
        std::cout << "Espadas]";
    else if (this->naipe == static_cast<unsigned char>(EnumNaipeCarta::COPAS))
        std::cout << "Copas]";
    else if (this->naipe == static_cast<unsigned char>(EnumNaipeCarta::PAUS))
        std::cout << "Paus]";
}