#include "SalaAula.hpp"
#include <iostream>
#include <stdexcept>

using namespace ufpr;

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}

SalaAula::~SalaAula(){
	std::cerr << "Destruindo Sala " << nome << std::endl;
	std::list<Disciplina*>::iterator it{disciplinasMinistradas.begin()};
	for( ; it != disciplinasMinistradas.end(); it++)
		(*it)->anularSalaAula();
}
    
std::string SalaAula::getNome(){
	return nome;
}

void SalaAula::setNome(std::string nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade(){
	return capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	if (capacidade > 0)
		this->capacidade = capacidade;
	else
		throw std::invalid_argument{"Capacidade da sala e menor que zero"};
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina){
	if(disciplina != nullptr)
		disciplinasMinistradas.push_back(disciplina);
	else
		throw std::invalid_argument{"Disciplina invalida, ponteiro nulo"};
}

void SalaAula::removerDisciplina(Disciplina* disciplina){
	if(disciplina != nullptr)
		disciplinasMinistradas.remove(disciplina);
	else
		throw std::invalid_argument{"Disciplina invalida, ponteiro nulo"};
}

std::list<Disciplina*>& SalaAula::getDisciplinas(){
	return disciplinasMinistradas;
}
