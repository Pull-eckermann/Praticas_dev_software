#include "Curso.hpp"
#include <iostream>

Curso::Curso(std::string nomeCurso, 
                unsigned short anoCriacao,
                unsigned short cargaHorariaMinima)
	:nomeCurso{nomeCurso} {
    setAnoCriacao(anoCriacao);
    setCargaHorariaMinima(cargaHorariaMinima);
}

std::string Curso::getNomeCurso(){
    return this->nomeCurso;
}

void Curso::setNomeCurso(std::string nomeCurso){
    this->nomeCurso = nomeCurso;
}
		
unsigned short Curso::getAnoCriacao(){
    return this->anoCriacao;
}

void Curso::setAnoCriacao(unsigned short anoCriacao){
    if(anoCriacao > 0)
        this->anoCriacao = anoCriacao;
    else
        this->anoCriacao = 0;
}

unsigned short Curso::getCargaHorariaMinima(){
    return this->cargaHorariaMinima;
}

void Curso::setCargaHorariaMinima(unsigned short cargaHorariaMinima){
    if(cargaHorariaMinima > 0)
        this->cargaHorariaMinima = cargaHorariaMinima;
    else
        this->cargaHorariaMinima = 0;
}

