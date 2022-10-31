#include <iostream>
#include <string>

#include"Pessoa.hpp"

int main(){
	std::string nomeLido;
	unsigned short idade;
	unsigned long cpfLido;
	
	std::cout << "Nome: ";
	std::cin >> nomeLido;
	
	std::cout << "Idade: ";
	std::cin >> idade;
	
	std::cout << "CPF: ";
	std::cin >> cpfLido;
	
	Pessoa p1(nomeLido, idade, cpfLido);
	
	std::cout << p1.getNome() << '\t' << (unsigned short)p1.getIdade() << '\t' << p1.getCpf() << std::endl;

	return 0;
}