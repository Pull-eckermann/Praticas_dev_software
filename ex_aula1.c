#include <stdio.h>
#include <stdlib.h>

//Struct que representa uma pessoa
typedef struct person{
    char *name;
    unsigned int cpf;
    int age;
} person;

//Função que consulta cpf e valida
int validarCPF(unsigned int cpf){
    return 1;
}
//Função responsável por colher nome do usuário do tipo person
char * leNome(){
    char * nome;
    printf("Digite o nome do usuário: ");
    scanf("%s",nome);
    return nome;
}
//Função responsável por colher o cpf
unsigned int leCPF(){
    unsigned int cpf;
    printf("Digite o CPF do usuário: ");
    scanf("%u",&cpf);
    while(!(validarCPF(cpf))){
        printf("CPF inválido, digite novamente:");
        scanf("%u",&cpf);
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
        printf("CPF: %u \n",p_list[i].cpf);
        printf("Idade: %d \n", p_list[i].age);
    }
}

void main(){
    person * p_list = malloc(sizeof(person)*3);
    //Colhe os dados de cada usuário
    for (int i = 0; i < 3; i++){
        printf("Insira os dados do usuário %d \n",i+1);
        p_list[i].name = leNome();
        p_list[i].cpf = leCPF();
        p_list[i].age = leIdade();
    printf("\n");
    }
    imprimeLista(p_list);
}