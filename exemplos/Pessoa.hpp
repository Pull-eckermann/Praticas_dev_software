#ifndef PESSOA_H
#define PESSOA_H

#include<string>

class Pessoa{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, unsigned long cpf, unsigned short int idade);

        unsigned long getCpf();
        void setCpf(unsigned long cpf);

        std::string getNome();
        void setNome(std::string nome);

        unsigned short int getIdade();
        void setIdade(unsigned short int idade);
    private:
        bool validarCPF(unsigned long cpf);

        std::string nome;
        unsigned long cpf;
        unsigned char idade;
};
#endif