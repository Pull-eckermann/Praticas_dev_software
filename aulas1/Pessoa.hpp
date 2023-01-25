#ifndef PESSOA_H
#define PESSOA_H

#include<string>

namespace ufpr{
class Pessoa{
	public:
		Pessoa();
		Pessoa(std::string nome);
		Pessoa(std::string nome, unsigned short int idade);
		Pessoa(std::string nome, unsigned long cpf);
		
		virtual ~Pessoa();

		unsigned long getCpf();
		void setCpf(unsigned long cpf);

		std::string getNome() const;
		void setNome(const std::string& nome);

		unsigned short int getIdade();
		void setIdade(unsigned short int idade);

		void imprimirEnderecoMemoria();
	protected:
		bool validarCPF(unsigned long cpf);

		std::string nome;
		unsigned long cpf;
		unsigned char idade;
};
} //namespace ufpr 
#endif
