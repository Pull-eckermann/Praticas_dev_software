#include <iostream>

#include "ProfessorEngenheiro.hpp"
#include "Professor.hpp"
#include "Engenheiro.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111,85, 40, 1234};
	
	std::cout << pe.getNome() << std::endl;
	std::cout << "Salario: " << pe.getSalario() << std::endl;
	std::cout << "Salario Professor: " << pe.Professor::getSalario() << std::endl;
        std::cout << "Salario Engenheiro: " << pe.Engenheiro::getSalario() << std::endl;

	return 0;
}
