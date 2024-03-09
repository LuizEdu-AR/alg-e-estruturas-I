#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct lista{
    int informacao;
    struct lista *prox_elemento;
}; 

Lista* cria_lista(void){
    return NULL;
}

Lista* insere_elemento(Lista* lista, int valor){

    // Aloca memória para um novo nó
    Lista* novo_no = (Lista*) malloc(sizeof(Lista));


    if (novo_no == NULL){
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    // Adiciona o valor no campo informação do novo nó
    novo_no->informacao = valor;
    // Conecta o novo nó ao início da lista
    novo_no->prox_elemento = lista;

    return novo_no;
}

void imprime_lista(Lista* lista){
    Lista * contador;

    for (contador = lista; contador != NULL; contador = contador->prox_elemento){
        printf("%d\n", contador->informacao);
    }
}

int maiores(Lista* lista, int valor){ 
    Lista * contador;
    int maiores = 0;

    for (contador = lista; contador != NULL; contador = contador->prox_elemento){
        if (contador->informacao > valor){
            maiores++;
        }
    }

    return maiores;
}

Lista * ultimo(Lista * lista){
    Lista * ultimo = lista;

    while (ultimo->prox_elemento != NULL){
        ultimo = ultimo->prox_elemento;
    }
    
    printf("O ultimo elemento da lista é: %d\n", ultimo->informacao);
    return ultimo;
}

Lista * concatena(Lista * lista1, Lista * lista2){
    Lista * lista_concatenada = lista1;

    while (lista_concatenada->prox_elemento != NULL){
        lista_concatenada = lista_concatenada->prox_elemento;
    }

    lista_concatenada->prox_elemento = lista2;

    return lista1;
}

Lista * retira_elemento(Lista* lista, int valor){
    Lista * anterior = NULL;
    Lista * atual = lista;

    while (atual != NULL){
        if (atual->informacao == valor){
            if (anterior == NULL){
                lista = atual->prox_elemento;
            } else {
                anterior->prox_elemento = atual->prox_elemento;
            }
            atual = lista;
        } else {
            anterior = atual;
            atual = atual->prox_elemento;
        }
    }

    return lista;
}