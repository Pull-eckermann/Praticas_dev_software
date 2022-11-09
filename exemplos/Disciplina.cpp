#include "Disciplina.hpp"
#include <iostream>

Disciplina::Disciplina(std::string nomeDisciplina, Curso& curso)
	:nome{nomeDisciplina}, curso{curso} {
}

void Disciplina:: imprimeDados(std::string& header, int horas_total){
	double pctCurso = (double) this->cargaHoraria / horas_total;
	std::cout << header << std::endl;
	std::cout << "Curso: " << this->curso.getNomeCurso() << std::endl;
	std::cout << "Disciplina: " << this->nome << std::endl;
	std::cout << "Carga Horaria: " << this->cargaHoraria << std::endl;
	std::cout << "Porcentagem do curso: " << pctCurso << std::endl;
	std::cout << "Docente: " << this->professor->getNome() << std::endl;
}

std::string Disciplina::getNome(){
	return this->nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int cargaHoraria){
	this->cargaHoraria = cargaHoraria;
}

Pessoa* Disciplina::getProfessor(){
    return this->professor;
}

void Disciplina::setProfessor(Pessoa* professor){
    this->professor = professor;
}
