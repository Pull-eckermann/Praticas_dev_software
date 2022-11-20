#include <iostream>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"

#include<list>

int main(){
    SalaAula sala{"Lab Info 1", 20};
    SalaAula sala2{"Lab Info 2", 40};

    Pessoa prof1{"João", 11111111111, 40};
    Disciplina dis1{"Orientacao a Objetos", &sala};
    dis1.setProfessor(&prof1);

    Pessoa prof2{"Maria", 22222222222, 30};    
    Disciplina dis2{"Sistemas Operacionais", &sala};
    dis2.setProfessor(&prof2);

    std::cout << "Dis1: " << dis1.getSalaAula()->getNome() << std::endl;
    std::cout << "Dis2: " << dis2.getSalaAula()->getNome() << std::endl;

    dis1.setSalaAula(&sala2);
    sala2.adicionarDisciplina(&dis2);

    std::cout << "Dis1: " << dis1.getSalaAula()->getNome() << std::endl;
    std::cout << "Dis2: " << dis2.getSalaAula()->getNome() << std::endl;

    return 0;
}