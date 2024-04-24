#include "pilha.h"
#include "stdio.h"
#include "stdlib.h"

#define elementosMax 5

struct pilha{
    int elementosAtuais;
    float *vetor;

};

Pilha* pilha_cria(void){
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));

    if (pilha == NULL){
        printf("Não há espaço");
    }

    pilha->vetor = (float*) malloc(elementosMax * sizeof(float));
    pilha->elementosAtuais = 0;
    return pilha;
}

void pilha_push(Pilha* pilha, float variavel){

    if(pilha->elementosAtuais == elementosMax){
        printf("A capacidade da pilha estourou! Realocando para o dobro...\n");
        pilha->vetor = (float*) realloc(pilha->vetor, 2*elementosMax*sizeof(float));
    }

    pilha->vetor[pilha->elementosAtuais] = variavel; // adicionando a variavel ao vetor no topo da pilha
    pilha->elementosAtuais++; // incrementando os elementos atuais
}

float pilha_pop(Pilha* pilha){
    float variavel;

    if (pilha_vazia(pilha)){
        printf("Pilha vazia não há nada para retirar \n");
        exit(1);
    }

    variavel = pilha ->vetor[pilha->elementosAtuais-1]; // acessando o elemento do topo
    pilha->elementosAtuais--; // removendo o elemento do topo

    return variavel;
}

int pilha_vazia(Pilha* pilha){
    return (pilha->elementosAtuais == 0); // retorna 1, se a pilha estiver vazia, 0 caso contrário
}

void pilha_libera(Pilha* pilha){
    free(pilha->vetor);
    free(pilha);
    printf("Pilha e vetor liberados\n");
}

float topo(Pilha* pilha){
    return pilha->vetor[pilha->elementosAtuais-1];
}

void pilha_imprime(Pilha* pilha){
    int contador;

    printf("Elementos da pilha: \n");

    for (contador = pilha->elementosAtuais-1; contador >= 0; contador--){
        printf("%.2f\n", pilha->vetor[contador]);
    }
}

void concatena_pilhas(Pilha* pilha1, Pilha* pilha2){
    int contador;

    for (contador = 0; contador < pilha2->elementosAtuais; contador++){
        pilha_push(pilha1, pilha2->vetor[contador]);
        pilha_pop(pilha2);
    }

    printf("Pilhas concatenadas!\n");

    pilha_imprime(pilha1);
}