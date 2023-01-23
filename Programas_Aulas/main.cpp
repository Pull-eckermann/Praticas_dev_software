#include <iostream>
#include <stdexcept>

#include "Disciplina.hpp"
#include "SalaAula.hpp"
#include "Professor.hpp"
#include "CPFInvalidoException.hpp"
#include "InvalidAgeEx.hpp"

int main(){
	try{
		Professor p{"Joao", 7757550955, 14000, 40};
		SalaAula *sa = new SalaAula{"PA-01", 40};
		Disciplina dis{"Historia", sa};

		p.setIdade(170);
		dis.setProfessor(&p);

		std::cout << "Disciplina: " << dis.getNome() << std::endl;
		std::cout << "Professor: " << dis.getProfessor()->getNome() << std::endl;
		std::cout << "Idade Professor: " << dis.getProfessor()->getIdade() << std::endl;
		std::cout << "Sala de Aula: " << dis.getSalaAula()->getNome() << std::endl;

	}catch (CPFInvalidoException& ci){
		std::cout << "Erro de CPF: " << ci.what() << "CPF incorreto: " << ci.cpf << std::endl;
	}catch (std::invalid_argument& ia){
		std::cout << "Argumento inválido: " << ia.what() << std::endl;
	}catch (InvalidAgeEx& iage){
		std::cout << "Idade inválida: " << iage.what() << std::endl;
	}catch (std::exception& ex){
		std::cout << "Erro generico: " << ex.what() << std::endl;
	}

}