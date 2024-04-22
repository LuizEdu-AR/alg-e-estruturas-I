#include "fila.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct _fila{
    int inicio, fim;
    int quantidade; /*numero de elemntos da fila*/
    int MAX_SIZE; /*tamanho maximo da fila*/
    int *valor; /*vetor dos valores*/
}Fila;

//Funcao para criar uma fila usando ponteiro para a lista fila
Fila *CriaFila(int MAX_SIZE){
    //Alocar memoria para a fila
    Fila *Q = (Fila*)calloc(1,sizeof(Fila));
    
    //Alocar memoria para o vetor de valores
    Q->valor = (int*)calloc(MAX_SIZE, sizeof(int));
    //Inicializar os valores da fila
    Q->MAX_SIZE = MAX_SIZE;
    //o numero de elementos da fila
    Q->quantidade = 0;
    //o inicio da fila
    Q->inicio = Q->fim = 0;

//Retornar a fila criada
return Q; 
}

//Funcao para destruir a fila
void DestruirFila(Fila **Q){
    Fila *Qaux = *Q;
    //Liberar a memoria do vetor de valores
    free(Qaux->valor);
    //Liberar a memoria da fila
    free(Qaux);
    //Atribuir NULL ao ponteiro da fila
    *Q = NULL;
}

//Funcao para verificar se a fila esta vazia
int FilaVazia(Fila *Q){
    //Se a quantidade de elementos da fila for 0, a fila esta vazia
    return (Q->quantidade == 0);
}

//Funcao para verificar se a fila esta cheia
int FilaCheia(Fila *Q){
    //Se a quantidade de elementos da fila for igual ao tamanho maximo da fila, a fila esta cheia
    return (Q->quantidade == Q->MAX_SIZE);
}

//Funcao para inserir um elemento na fila
int InsereFila(Fila*Q, int elem){
    //Se a fila estiver cheia, nao e possivel inserir um elemento
    if(FilaCheia(Q)){
        printf("A fila esta cheia\n");
        return 0;
    }
    //Se a fila nao estiver cheia, inserir o elemento na posicao final da fila
    else{
        //Inserir o elemento na posicao final da fila
        Q->valor[Q->fim] = elem;
        //Atualizar a posicao final da fila
        Q->fim = (Q->fim + 1) % Q->MAX_SIZE;
        //Atualizar a quantidade de elementos da fila
        Q->quantidade++;
        //Retornar 1 para indicar que o elemento foi inserido com sucesso
        return 1;
    }
}

//Funcao para remover um elemento da fila
int RemoveFila(Fila *Q){
    //Se a fila estiver vazia, nao e possivel remover um elemento
    if (FilaVazia(Q)){
        printf("EBA FILA ESTA VAZIA!!!!!!!!!!!!!!!!!!!!");
        return 0;
    }
    //Se a fila nao estiver vazia, remover o elemento da posicao inicial da fila
    else{
        //Atualizar a posicao inicial da fila
        Q->inicio = (Q->inicio+1) %  Q->MAX_SIZE;
        //Atualizar a quantidade de elementos da fila
        Q->quantidade--;
        return 1;
    }
}

//Funcao para consultar o elemento da fila
int ConsultaFila(Fila *Q, int *elem){
    //Se a fila estiver vazia, nao e possivel consultar um elemento
    if (FilaVazia(Q)){
        printf("EBA FILA ESTA VAZIA!!!!!!!!!!!!!!!!!!!!!!!");
        return 0;
    }
    //Se a fila nao estiver vazia, consultar o elemento da posicao inicial da fila
    else{
        //Atribuir o elemento da posicao inicial da fila a variavel elem
        *elem = Q->valor[Q->inicio];
        return 1;
    }
}