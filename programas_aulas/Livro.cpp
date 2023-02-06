#include "Livro.hpp"

#include <iostream>

namespace ufpr{
Livro::Livro(const unsigned long ISBN, const std::string& titulo, const short int ano)
        :ISBN{ISBN}, titulo{titulo}, ano{ano}{
}

Livro::~Livro(){
    std::cout << "Deletando Livro " << titulo << '\n';
}

unsigned long Livro::getISBN() const{
    return this->ISBN;
}
        
const std::string& Livro::getTitulo() const{
    return this->titulo;
}

void Livro::setAbstract(const std::string& abstract){
    this->abstract = abstract;
}

const std::string& Livro::getAbstract() const{
    return this->abstract;
}

const short int Livro::getAno() const{
    return this->ano;
}

void Livro::addAutor(const std::string& autor){
    this->autores.push_back(autor);
}

const std::list<std::string>& Livro::getAutores() const{
    return this->autores;
}
}