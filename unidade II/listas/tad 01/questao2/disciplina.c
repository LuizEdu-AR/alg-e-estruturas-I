#include "disciplina.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct disciplina{
    char nome[100];
    int codigo;
}Disciplina;

Disciplina * cria_disciplina(char nome[], int codigo){
    Disciplina * disciplina = (Disciplina *) malloc(sizeof(Disciplina));
    strcpy(disciplina->nome, nome);
    disciplina->codigo = codigo;
    return disciplina;
}

void exclui_disciplina(Disciplina * d){
    free(d);
}

void imprime_disciplina(Disciplina * disciplina){
    printf("\tNome:\t%s\n", disciplina->nome);
    printf("\tCodigo:\t%d\n", disciplina->codigo);
}