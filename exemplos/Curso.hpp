#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso{
	public:
        Curso(std::string nomeCurso, 
                unsigned short anoCriacao,
                unsigned short cargaHorariaMinima);

		std::string getNomeCurso();
		void setNomeCurso(std::string nomeCurso);
		
		unsigned short getAnoCriacao();
		void setAnoCriacao(unsigned short anoCriacao);

		unsigned short getCargaHorariaMinima();
        void setCargaHorariaMinima(unsigned short cargaHorariaMinima);

	private:
		std::string nomeCurso;
		unsigned short anoCriacao;
        unsigned short cargaHorariaMinima;
};
#endif
