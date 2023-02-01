#include <iostream>
#include <list>


#include "Ementa.hpp"


int main(){
    std::list<ufpr::Ementa> ementas;
    ufpr::Ementa e1{"Ementa 1"};
    ufpr::Ementa e2{"Ementa 2"};

    ementas.push_back(e1);
    ementas.push_back(e2);
    ufpr::Ementa emt{e1};
    
    std::cout << emt.getDescricao() << std::endl; 

    //std::list<ufpr::Ementa>::const_iterator it{ementas.begin()};
    //for( ; it != ementas.end(); ++it)
    //    std::cout << it->getDescricao() << '\n';

    return 0;
}