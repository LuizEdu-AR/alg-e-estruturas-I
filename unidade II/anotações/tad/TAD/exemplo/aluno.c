//TAD: Aluno.h
#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
   
    Aluno * estudante = (Aluno*)malloc(sizeof(Aluno));
    
    if(estudante == NULL){
        printf("Erro ao alocar espaço");
        exit(1);
    }

    printf("Informe o nome do aluno:\n");
    scanf("%s", estudante->nome);
    
    printf("Informe o numero da matricula do estudante:\n");
    scanf("%d", &estudante->matricula);
    
    printf("Informe o ira do estudante:\n");
    scanf("%f", &estudante->IRA);

    return estudante;
};

void imprime_dados(Aluno * estudante)
{
    printf("DADOS:\n");
    printf("nome: %s\n",estudante->nome);
    printf("Matricula: %d\n",estudante->matricula);
    printf("IRA: %.2f\n",estudante->IRA);
};

Aluno * limpardados(void)
{
    Aluno * estudante = (Aluno*)malloc(sizeof(Aluno));

    free(estudante);

    return estudante;
};