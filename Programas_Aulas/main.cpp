#include <iostream>

#include "ProfessorEngenheiro.hpp"
#include "Professor.hpp"
#include "Engenheiro.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111,85, 40, 1234};
	
	std::cout << pe.getNome() << std::endl;

	return 0;
}
