#include <iostream>

#include "Pessoa.hpp"

int main(){
	Pessoa *p{nullptr};

	try{
		p = new Pessoa{nome, cpf, 18};
		p->setIdade(idade);
		std::cout << p->getNome()
			<< " " << p->getCpf()
			<< " " << p->getIdade() << std::endl;
	}catch(std::invalid_argument& iv){
		std::cout << "Argumento invalido: " << iv.what() << std::endl;
	}catch(CPFInvalidoException& cpfe){
		std::cout << "Erro de CPF: " << cpfe.what() << cpfe.cpf << std::endl;
	}
	delete p;
	return 0;
}