#include <iostream>
#include <list>
#include "Ementa.hpp"
#include "Disciplina.hpp"

int main(){
    std::list<ufpr::Ementa> ementas;
    ementas.push_back(ufpr::Ementa{"Ementa 1"});
    ementas.push_back(ufpr::Ementa{"Ementa 2"});

    ufpr::Ementa ementaDis{"Ementa Dis"};
    ufpr::Disciplina disciplina{"C++"};
    disciplina.setEmenta(ementaDis);

    ementaDis = ufpr::Ementa{"Outra Ementa"};

    std::list<ufpr::Ementa>::const_iterator it{ementas.begin()};
    for( ; it != ementas.end(); ++it)
        std::cout << it->getDescricao() << '\n';
    
    return 0;
}
