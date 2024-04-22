#include "pilha.h"
#include "stdlib.h"
#include "stdio.h"
#define elementosMax 50

// Definição da estrutura da pilha com duas variaveis inteiras e um vetor de float
struct pilha{
    int pilhaElementos;
    float v[elementosMax];

};

// Função que cria uma pilha
Pilha* pilha_cria(void){

    // Alocando espaço para a pilha na memória
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));

    // Verificando se há espaço usando a condição if para saber se a pilha foi alocada
    if (pilha == NULL){
        // Caso não haja espaço, a função é encerrada
        printf("Não há espaço");
    }

    // Inicializando a pilha
    pilha->pilhaElementos = 0;
    // Retornando a pilha
    return pilha;
}

// Função que insere um elemento na pilha
void pilha_push(Pilha* pilha, float variavel){

    // Verificando se a pilha está cheia, vai acessar o vetor de float e verificar se o número de elementos é igual ao máximo de elementos
    if(pilha->pilhaElementos == elementosMax){
        printf("A capacidade da pilha estourou!");
        exit(1);
    }

    // adicionando a variavel ao vetor no topo da pilha
    pilha->v[pilha->pilhaElementos] = variavel; 
    // incrementando os elementos atuais
    pilha->pilhaElementos++;

}

// Função que verifica se a pilha está vazia
int pilha_vazia(Pilha* pilha){
    // retorna 1, se a pilha estiver vazia, 0 caso contrário
    return (pilha->pilhaElementos == 0); 
}

// Função que remove o último item da pilha, em que, na pilha o último item inserido é o primeiro a ser removido
float pilha_pop(Pilha* pilha){
    float variavel;
    // Verificando se a pilha está vazia
    if (pilha_vazia(pilha)){
        printf("pilha vazia. \n");
        exit(1);
    }

    // acessando o elemento do topo
    variavel = pilha ->v[pilha->pilhaElementos-1]; 
    // removendo o elemento do topo
    pilha->pilhaElementos--; 

    return variavel;
}

// Função que libera dinamicamente a pilha
void pilha_libera(Pilha* pilha){
    free(pilha);
}

// Função que imprime os elementos da pilha
void pilha_imprime(Pilha* pilha){
    int contador;

    // Imprimindo os elementos da pilha
    for (contador = (pilha->pilhaElementos - 1); contador >= 0; contador--)//contador começa do topo da pilha
    {
        printf("O elemento %d: %.2f\n", contador, pilha->v[contador]);
    }
}