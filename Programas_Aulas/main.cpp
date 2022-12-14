#include <iostream>
#include "Aluno.hpp"

int main(){
	Aluno p{"Erick", 11111111111, 22, "GRR2018675"};
	
	std::cout << p.getNome() << std::endl;
	std::cout << p.getGRR() << std::endl;
	
	return 0;
}
