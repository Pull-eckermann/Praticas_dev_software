#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

class SalaAula{
	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);
	private:
		std::string nome;
		unsigned int capacidade;
};
#endif