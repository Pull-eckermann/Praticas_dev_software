#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <string>
#include <list>

namespace ufpr{
class Livro{
    public:
        Livro(const unsigned long ISBN, const std::string& titulo, const short int ano);
        virtual ~Livro();
        
        unsigned long getISBN() const;
        const std::string& getTitulo() const;

        void setAbstract(const std::string& abstract);
        const std::string& getAbstract() const;

        const short int getAno() const;

        void addAutor(const std::string& autor);
        const std::list<std::string>& getAutores() const;

    private:
        const unsigned long ISBN;//número de identificação único
        const std::string titulo;
        short int ano;
        std::string abstract;
        std::list<std::string> autores;
};
}
#endif