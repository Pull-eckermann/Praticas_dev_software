#include "SalaAula.hpp"
#include "Disciplina.hpp"


SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}

SalaAula:: ~SalaAula(){
	
}

std::string SalaAula::getNome(){
	return this->nome;
}

void SalaAula::setNome(std::string nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade(){
	return this->capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	this->capacidade = capacidade;
}

std::list<Disciplina*>& SalaAula::getDisciplinas(){
  return disciplinasMinistradas;
}

void SalaAula::adicionarDisciplina(Disciplina *dis){
	if(dis != nullptr){
		this->disciplinasMinistradas.push_back(dis);
		if(dis->sala != nullptr)
			dis->sala->disciplinasMinistradas.remove(dis);
		dis->sala = this;
	}
}
