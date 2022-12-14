#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
#include "Pessoa.hpp"

class Aluno : public Pessoa{
    public:
        Aluno(const std::string& nome, const unsigned long cpf, 
            const unsigned short idade, const std::string GRR);
        ~Aluno();
        
        void setGRR(std::string GRR);
        std::string getGRR() const;

        void setPeriodo(unsigned short periodo);
        unsigned short getPeriodo() const;

    private:
        std::string GRR;
        unsigned short periodo;
};
#endif