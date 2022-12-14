#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Aluno.hpp"
#include "Professor.hpp"
#include "ConteudoMinistrado.hpp"

class SalaAula;//Forward Declaration

class Disciplina{
	friend SalaAula;

	public:
		Disciplina(std::string nome);
		Disciplina(std::string nome, SalaAula* sala);

		~Disciplina();

		std::string getNome() const;
		void setNome(std::string nome);
		
		int getCargaHoraria() const;
		void setCargaHoraria(unsigned int carga);

		Professor* getProfessor() const;
    	void setProfessor(Professor* prof);

		void setSalaAula(SalaAula* sala);
    	SalaAula* getSalaAula();
		void anularSalaAula();

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
    	void imprimirConteudosMinistrados();
		std::list<ConteudoMinistrado*>& getConteudos();

		void adicionarAluno(Aluno* aluno);
		void removerAluno(Aluno* aluno);
		void removerAluno(unsigned long cpf);
		const std::list<Aluno*>& getAlunos() const;
	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Professor* professor;
		SalaAula* sala;

		std::list<ConteudoMinistrado*> conteudos;
		std::list<Aluno*> alunos;
};
#endif