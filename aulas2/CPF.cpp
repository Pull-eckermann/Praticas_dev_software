#include "CPF.hpp"

#include "CPFInvalidoException.hpp"

using namespace ufpr;

CPF::CPF(const unsigned long numero){
    this->setNumero(numero);
}

unsigned long CPF::getNumero() const{
    return this->numero;
}

void CPF::setNumero(const unsigned long numero){
    if(!validarCPF(numero))
        throw CPFInvalidoException{numero};
    this->numero = numero;
}

bool CPF::validarCPF(unsigned long cpfTeste) const{
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	int penultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i=2; i <= 11; i++){
		modulo = cpfTeste%10;
		cpfTeste = cpfTeste/10;
		somatorioValidaPenultimo += modulo*i;
		somatorioValidaUltimo += modulo*(i+1);
	}
	modulo = somatorioValidaPenultimo%11;
	if(modulo < 2){
		if(!penultimo)
			return false;//cpf invalido
	}else{
		if(penultimo != 11 - modulo)
			return false;//cpf invalido
	}
	modulo = somatorioValidaUltimo%11;
	if(modulo < 2){
		if(!ultimo)
			return false;//cpf invalido
	}else{
		if(ultimo != 11-modulo)
			return false;//cpf invalido
	}
	return true;//cpf valido
}

bool CPF::operator==(const CPF& outro) const{
	return this->numero == outro.numero;
}

bool CPF::operator!=(const CPF& outro) const{
	return this->numero != outro.numero;
}

bool CPF::operator<(const CPF& outro) const{
	return this->numero < outro.numero;
}

bool CPF::operator>(const CPF& outro) const{
	return this->numero > outro.numero;
}

bool CPF::operator<=(const CPF& outro) const{
	return this->numero <= outro.numero;
}

bool CPF::operator>=(const CPF& outro) const{
	return this->numero >= outro.numero;
}

const CPF& CPF::operator=(const CPF& outro){
	if (&outro != this)
		this->numero = outro.numero;
	return *this;
}

const CPF& operator=(const unsigned long outro){
	if (outro != this)
		this->numero = outro.numero;
	return *this;
}