#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"

class Console{
	public:
		~Console();

		static void imprimirDadosDisciplina(Disciplina& disciplina);	
};
#endif
