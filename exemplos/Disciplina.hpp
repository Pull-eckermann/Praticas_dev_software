#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "Pessoa.hpp"
#include "Curso.hpp"

class Disciplina{
	public:
		Disciplina(std::string nome);
		Disciplina(std::string nome, Curso& curso);

		void imprimeDados(std::string& header, int horas_total);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);

		Pessoa* getProfessor();
        void setProfessor(Pessoa* professor);

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		Curso& curso;
};
#endif
