#include "Aluno.hpp"

Aluno::Aluno(const std::string& nome, const unsigned long cpf, 
        const unsigned short idade, const std::string GRR) :Pessoa(nome, cpf){    
    this->setIdade(idade);
    this->GRR = GRR; 
}

Aluno::~Aluno(){
}
        
void Aluno::setGRR(std::string GRR){
    this->GRR = GRR;
}

std::string Aluno::getGRR() const{
    return this->GRR;
}

void Aluno::setPeriodo(unsigned short periodo){
    this->periodo = periodo;
}

unsigned short Aluno::getPeriodo() const{
    return this->periodo;
}