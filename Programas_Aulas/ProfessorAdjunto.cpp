#include "ProfessorAdjunto.hpp"

#include<iostream>

using namespace ufpr;

ProfessorAdjunto::~ProfessorAdjunto(){
}

unsigned int ProfessorAdjunto::getSalario() const{
	return Professor::getSalario() * 1.1;
}
