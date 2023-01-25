#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "ConteudoMinistrado.hpp"
#include "Professor.hpp"
#include "Pessoa.hpp"
#include "EnumTipoDisciplina.hpp"

namespace ufpr{
class SalaAula;//forward declaration
class Disciplina{
	public:
		Disciplina(std::string nome, SalaAula* sala);
		Disciplina(std::string nome, SalaAula* sala, EnumTipoDisciplina prioridade);
		virtual ~Disciplina();

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);
		
		Professor* getProfessor();
		void setProfessor(Professor* professor);

		void adicionarAluno(Pessoa* aluno);
		void removerAluno(Pessoa* aluno);
		void removerAluno(unsigned long cpf);
		const std::list<Pessoa*>& getAlunos() const;

		void setSalaAula(SalaAula* sala);
		SalaAula* getSalaAula();
		void anularSalaAula();

		void imprimeDados(std::string& cabecalho, unsigned int& cargaTotalCurso);

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
		void imprimirConteudosMinistrados();
	private:
		std::string nome;
		unsigned short int cargaHoraria;

		EnumTipoDisciplina prioridade;
		Professor* professor;
		SalaAula* sala;
		std::list<Pessoa*> alunos;
		std::list<ConteudoMinistrado*> conteudos;
};
} // namespace upfr
#endif
