#include "Engenheiro.hpp"
#include <iostream>

using namespace ufpr;

Engenheiro::Engenheiro(){};

Engenheiro::Engenheiro(const unsigned int numeroCrea) : numeroCrea(numeroCrea){
	std::cout << "Construindo Engenheiro" << std::endl;
}

Engenheiro::~Engenheiro(){
	std::cout << "Destruindo Engenheiro" << std::endl;
}

unsigned int Engenheiro::getNumeroCrea() const{
	return this->numeroCrea;
}

void Engenheiro::setNumeroCrea(const unsigned int numeroCrea){
	this->numeroCrea = numeroCrea;
}

unsigned int Engenheiro::getSalario() const{
	return Engenheiro::salarioPadrao;
}
