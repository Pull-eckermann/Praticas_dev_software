#include "Pessoa.hpp"

Pessoa:: Pessoa(){
}

Pessoa::Pessoa(std::string nomePessoa)
	:nome{nomePessoa}, cpf{0}, idade{0}{
}

Pessoa:: Pessoa(std::string nomePessoa, unsigned short idadePessoa, unsigned long cpfPessoa)
	:Pessoa{nomePessoa}{
	setIdade(idadePessoa);
	setCpf(cpfPessoa);
}

//=======================Gets e Seters======================
unsigned long Pessoa::getCpf(){
	return cpf;
}

void Pessoa::setCpf(unsigned long novoCpf){
	if(validarCPF(novoCpf)){
		cpf = novoCpf;
		return;
	}
	cpf = 0;
}

std::string Pessoa::getNome(){
	return nome;
}

void Pessoa::setNome(std::string name){
	nome = name;
}
	
unsigned char Pessoa::getIdade(){
	return idade;
}

void Pessoa::setIdade(unsigned short age){
	if (age < 130){
		idade = (unsigned char) age;
		return;
	}
	idade = 0;
}


bool Pessoa::validarCPF(unsigned long cpfTeste){
	unsigned int somatorioValidaUltimo;
	unsigned int modulo;
	unsigned int somatorioValidaPenultimo{0};
	unsigned int ultimo{(unsigned int)(cpfTeste%10)};
	cpfTeste = cpfTeste/10;
	unsigned int penultimo{(unsigned int)(cpfTeste%10)};
	cpfTeste = cpfTeste/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i{2}; i <= 11; i++){
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