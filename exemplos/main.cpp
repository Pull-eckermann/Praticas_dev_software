#include <iostream>
#include <string>

#include"Pessoa.hpp"

int main(){
	Pessoa p1;
	unsigned long cpfLido;
	std::string nomeLido;
	unsigned short idade;
	
	std::cout << "Nome: ";
	std::cin >> nomeLido;
	p1.setNome(nomeLido);
	
	std::cout << "Idade: ";
	std::cin >> idade;
	p1.setIdade(idade);
	
	std::cout << "CPF: ";
	std::cin >> cpfLido;
	p1.setCpf(cpfLido);
	
	std::cout << p1.getNome() << '\t' << (unsigned short)p1.getIdade() << '\t' << p1.getCpf() << std::endl;
	return 0;
}