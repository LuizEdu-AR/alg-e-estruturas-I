#include <stdio.h>
#include <stdlib.h>

//Typedef = me permite mudar o tipo 
/*
struct aluno {
    char nome[20];
    int idade, matricula;
    char email[50];
}Estudante;

typedef int INTEIRO - agora int é reconhecido por INTEIRO
*/

struct aluno {
    char nome[20];
    int idade, matricula;
    char email[50];
};

struct professor {
    char nome[20];
    int idade, matricula;
    char email[50];
    char turmas[50];
    char departamento[50];
};

void preenche(struct aluno * estudante){ //é void por que eu recebo um endereço. Logo, não preciso retornar
    printf("Informe o nome: \n");
    scanf(" %[^\n]", estudante -> nome);
    printf("Informe a idade: \n");
    scanf("%d", &estudante -> idade);
    printf("Informe a matricula \n");
    scanf("%d", &estudante -> matricula);
    printf("Informe o E-mail: \n");
    scanf(" %[^\n]", estudante -> email);
}

void preenche_docentes(struct professor * docente){
    printf("Informe o nome: \n");
    scanf(" %[^\n]", docente -> nome);
    printf("Informe a idade: \n");
    scanf("%d", &docente -> idade);
    printf("Informe a matricula \n");
    scanf("%d", &docente -> matricula);
    printf("Informe o E-mail: \n");
    scanf(" %[^\n]", docente -> email);
    printf("Informe a turma: \n");
    scanf(" %[^\n]", docente -> turmas);
    printf("Informe o departamento: \n");
    scanf(" %[^\n]", docente -> departamento);
}

void imprime(struct aluno * estudante){
    printf("Nome: %s\nIdade: %d\nMatricula: %d\nE-mail: %s \n", estudante ->nome, estudante -> idade, estudante -> matricula, estudante -> email);
}

void imprime_docentes(struct professor * docente){
    printf("Nome: %s\nIdade: %d\nMatricula: %d\nE-mail: %s \nTurma: %s \nDepartamento: %s \n", docente ->nome, docente -> idade, docente -> matricula, docente -> email, docente -> turmas, docente -> departamento);
}

int main(){
    struct aluno *estudante = (struct aluno *) malloc(sizeof(struct aluno)); //Variável do tipo estruturado
    //Para variável do tipo estuturado o operador de acesso não é mais ponto, mas -> ou (estudante).idade
    if(estudante == NULL){
        exit(1);
    }

    struct professor *docente = (struct professor*) malloc(sizeof(struct professor));
    if(docente == NULL){
        exit(1);
    }

    preenche(estudante);
    imprime(estudante);
    preenche_docentes(docente);
    imprime_docentes(docente);
    free(estudante);
    free(docente);

    return 0; 
}