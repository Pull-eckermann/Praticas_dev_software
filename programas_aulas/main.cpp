#include <iostream>
#include <memory>

#include "Livro.hpp"
#include "Ementa.hpp"

int main() {
    ufpr::Ementa* ementa1{new ufpr::Ementa{"Paradigmas de programação"}};
    ufpr::Ementa* ementa2{new ufpr::Ementa{"Orientação a Objetos"}};


    {
        std::shared_ptr<const ufpr::Livro> l1{new ufpr::Livro{1234, "C++ como programar", 2020}};
        std::shared_ptr<const ufpr::Livro> l2{new ufpr::Livro{5678, "C++ Bjarne", 2013}};

        ementa1->addLivro(l1);
        ementa1->addLivro(l2);

        ementa2->addLivro(l1);

    }
    
    delete ementa1;
    std::cout << "Ementa 1 deletada, deletando ementa 2";
    delete ementa2;

    return 0;
}