#include<iostream>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){
 Pessoa* p1{new Pessoa{"Joao", 11111111111, 20}};
 Curso curso{"BCC", 1990, 3200};
 Disciplina d1{"Orientacao a Objetos", curso};

 d1.setProfessor(p1);
 d1.setCargaHoraria(60);

 std::string cabecalho{"Dados da disciplina"};
 d1.imprimeDados(cabecalho, 4000);
 delete p1;

 return 0;
}