#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

class Disciplina; //Foward declaration

class SalaAula{
	friend Disciplina;

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		~SalaAula();

		std::string getNome() const;
		void setNome(std::string nome);

		unsigned int getCapacidade()	const;
		void setCapcidade(unsigned int capacidade);

		const std::list<Disciplina*>& getDisciplinas() const;
    void adicionarDisciplina(Disciplina * dis);

	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif
