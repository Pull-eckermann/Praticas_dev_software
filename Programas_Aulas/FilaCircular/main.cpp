#include <iostream>

#include "FilaCircular.hpp"

int main(){
	int retorno;
	FilaCircular<> f;
	
	f.push(1);
	f.push(2);
	f.push(3);
	f.push(4);
	f.push(5);

	while(!f.estaVazia()){
		f.pop(&retorno);
		std::cout << retorno << "\n";
	}
	

	std::cout << "Fim\n";

	return 0;
}
