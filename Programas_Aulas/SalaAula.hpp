#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

class Disciplina; //Foward declaration

class SalaAula{
	friend Disciplina;

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);

		std::list<Disciplina*>& getDisciplinas();
    void adicionarDisciplina(Disciplina * dis);

	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif