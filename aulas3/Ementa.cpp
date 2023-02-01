#include "Ementa.hpp"


namespace ufpr{

Ementa::Ementa():livros{new std::list<Livro>}{}

Ementa::Ementa(const std::string descricao)
        :descricao{descricao}, livros{new std::list<Livro>}{
}

Ementa::Ementa(const Ementa& ementa)
        :descricao{ementa.descricao}, livros{new std::list<Livro>{*ementa.livros}}{
}

Ementa::Ementa(Ementa&& ementa)
        :descricao{ementa.descricao}, livros{ementa.livros}{
    ementa.livros = nullptr;
}

Ementa::~Ementa(){
    if(livros!=nullptr)
        delete livros;    
}

void Ementa::setDescricao(const std::string& descricao){
    this->descricao = descricao;
}

const std::string& Ementa::getDescricao() const{
    return this->descricao;
}

void Ementa::addLivro(const Livro& livro){
    this->livros->push_back(livro);
}

const std::list<Livro>* Ementa::getLivros() const{
    return this->livros;
}
}