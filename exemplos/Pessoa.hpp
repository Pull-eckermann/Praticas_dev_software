#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

class Pessoa{
	public:
		Pessoa();
		Pessoa(std::string nomePessoa);
		Pessoa(std::string nome, unsigned short idade, unsigned long cpf);

		unsigned long getCpf();
		void setCpf(unsigned long novoCpf);

		std::string getNome();
		void setNome(std::string nome);

		unsigned char getIdade();
		void setIdade(unsigned short idade);
	
	private:
		bool validarCPF(unsigned long cpfTeste);

		std::string nome;
		unsigned long cpf;
		unsigned char idade;
};
#endif