#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa p1{"Joao", 11111111111, 20};
	Pessoa p2{"Maria"};

	Disciplina d1{"Orientacao a Objetos"};

	std::cout << p1.getNome() << '\t' << p1.getIdade() << '\t' <<  p1.getCpf() << '\n';
	std::cout << p2.getNome() << '\n';

	std::cout << d1.getNome() << '\n';

	return 0;
}