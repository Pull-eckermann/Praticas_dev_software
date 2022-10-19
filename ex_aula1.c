#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct que representa uma pessoa
typedef struct person{
    char name[1024];
    long int cpf;
    int age;
} person;

//Função que consulta cpf e valida
int validarCPF(long int cpf){
    //Primeira parte da validação
    int soma = 0;
    long int aux = cpf / 100;
    int dig;
    for(int i = 2; i <=10; i++){
        dig = aux % 10;
        aux /= 10;
        soma = (dig * i) + soma;
    }
    soma *= 10;
    int resto = soma % 11;
    if(resto == 10)
        resto = 0;
    dig = cpf % 100;
    dig /= 10;
    if(dig == resto){ //Inicia a segunda parte da validação
	soma = 0;
	aux = cpf / 10;
	for(int i = 2; i <= 11; i++){
            dig = aux % 10;
	    aux /= 10;
	    soma = (dig * i) + soma;
	}
	soma *= 10;
	resto = soma % 11;
	if(resto == 10)
	    resto = 0;
	dig = cpf % 10;
        if(dig == resto)
	    return 1;
	else
	    return 0;
    }else
        return 0;
}
//Função responsável por colher nome do usuário do tipo person
void *leNome(char *teste){
    char nome[1024];
    printf("Digite o nome do usuário: ");
    scanf("%s",nome);
    memcpy(teste,nome,1024);
}
//Função responsável por colher o cpf
long int leCPF(){
    long int cpf;
    printf("Digite o CPF do usuário: ");
    scanf("%ld",&cpf);
    printf("%ld\n",cpf);
    while(!(validarCPF(cpf))){
        printf("CPF inválido, digite novamente:");
        scanf("%ld",&cpf);
	printf("%ld\n",cpf);
        if (validarCPF(cpf))
            return cpf;
    }
    return cpf;
}
//Função responsável em ler a idade da pessoa
int leIdade(){
    int age;
    printf("Digite a idade do usuário: ");
    scanf("%d",&age);
    return age;
}

void imprimeLista(person *p_list){
    for(int i = 0; i < 3; i++){
        printf("\nCadastro %d \n",i+1);
        printf("Nome: %s \n",p_list[i].name);
        printf("CPF: %ld \n",p_list[i].cpf);
        printf("Idade: %d \n", p_list[i].age);
    }
}

void main(){
    person * p_list = malloc(sizeof(person)*3);
    char nome[1024];
    //Colhe os dados de cada usuário
    for (int i = 0; i < 3; i++){
        printf("Insira os dados do usuário %d \n",i+1);
	leNome(nome);
        memcpy(p_list[i].name,nome,1024);
        p_list[i].cpf = leCPF();
        p_list[i].age = leIdade();
        printf("\n");
    }
    imprimeLista(p_list);
}
