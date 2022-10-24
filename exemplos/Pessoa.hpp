#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{
	public:
		unsigned long getCpf();
		void setCpf(unsigned long novoCpf);

		std::string getNome();
		void setNome(std::string name);

		unsigned char getIdade();
		void setIdade(unsigned short age);
	
	private:
		bool validarCPF(unsigned long cpfTeste);

		std::string nome;
		unsigned long cpf;
		unsigned char idade;
};
#endif