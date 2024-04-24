#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


// Reaproveitei o mesmo código da questão 1 nas questões 2, 3 e 4, apenas alterando o nome das funções e a estrutura de dados. Com bjetivo de facilitar o trabalho
typedef struct no {
    int valor;
    struct no* prox;
    struct no* ant;
} No;

typedef struct lista2 {
    No* inicio;
} Lista2;

Lista2* lst2_cria(void) {
    Lista2* lista = (Lista2*)malloc(sizeof(Lista2));
    lista->inicio = NULL;
    return lista;
}

void lst2_libera(Lista2* l) {
    No* atual = l->inicio;
    while (atual != NULL) {
        No* proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    free(l);
}

Lista2* lst2_insere(Lista2* l, int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = v;
    novo->prox = l->inicio;
    novo->ant = NULL;
    if (l->inicio != NULL) {
        l->inicio->ant = novo;
    }
    l->inicio = novo;
    return l;
}

Lista2* lst2_retira(Lista2* l, int v) {
    No* atual = l->inicio;
    while (atual != NULL && atual->valor != v) {
        atual = atual->prox;
    }
    if (atual == NULL) {
        return l;
    }
    if (atual->ant != NULL) {
        atual->ant->prox = atual->prox;
    } else {
        l->inicio = atual->prox;
    }
    if (atual->prox != NULL) {
        atual->prox->ant = atual->ant;
    }
    free(atual);
    return l;
}

int lst2_vazia(Lista2* l) {
    return l->inicio == NULL;
}

Lista2* lst2_busca(Lista2* l, int v) {
    No* atual = l->inicio;
    while (atual != NULL && atual->valor != v) {
        atual = atual->prox;
    }
    return atual;
}

void lst2_imprime(Lista2* l) {
    No* atual = l->inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

//Na questão 1, é criada uma tad para as funções de lst2_cria, lst2_libera, lst2_insere, lst2_retira, lst2_vazia, lst2_busca, lst2_imprime. Na qual elas tem as seguintes funcionalidades: lst2_cria cria uma lista vazia, lst2_libera libera a lista, lst2_insere insere um elemento na lista, lst2_retira retira um elemento da lista, lst2_vazia verifica se a lista está vazia, lst2_busca busca um elemento na lista e lst2_imprime imprime a lista.

void lcirc_imprime(Lista2* l) {
    if (l == NULL || l->inicio == NULL) {
        return;
    }
    No* atual = l->inicio;
    do {
        printf("%d ", atual->valor);
        atual = atual->prox;
    } while (atual != l->inicio);
    printf("\n");
}

//Na questão 2 (função acima) é criada uma função lcirc_imprime que imprime a lista de forma circular, ou seja, ela imprime a lista de forma que o ultimo elemento aponte para o primeiro.


void l2circ_imprime_rev(Lista2* l) {
    if (l == NULL || l->inicio == NULL) {
        return;
    }
    No* atual = l->inicio->ant;
    do {
        printf("%d ", atual->valor);
        atual = atual->ant;
    } while (atual != l->inicio->ant);
    printf("\n");
}

// Na questão 3 (função acima) é criada uma função l2circ_imprime_rev que imprime a lista de forma circular, ou seja, ela imprime a lista de forma que o ultimo elemento aponte para o primeiro, porém de forma reversa.

Lista2* lst2_insere_circular(Lista2* l, int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = v;
    if (l->inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        l->inicio = novo;
    } else {
        No* ultimo = l->inicio->ant;
        novo->prox = l->inicio;
        novo->ant = ultimo;
        l->inicio->ant = novo;
        ultimo->prox = novo;
    }
    return l;
}

Lista2* lst2_retira_circular(Lista2* l, int v) {
    if (l->inicio == NULL) {
        return l;
    }
    No* atual = l->inicio;
    while (atual->valor != v) {
        atual = atual->prox;
        if (atual == l->inicio) {
            return l; // Element not found
        }
    }
    if (atual == l->inicio) {
        l->inicio = l->inicio->prox;
    }
    atual->ant->prox = atual->prox;
    atual->prox->ant = atual->ant;
    free(atual);
    return l;
}


//Na questão 4 (funções acima) é criada uma função lst2_insere_circular que insere um elemento na lista de forma circular, ou seja, ela insere um elemento na lista de forma que o ultimo elemento aponte para o primeiro. E também é criada uma função lst2_retira_circular que retira um elemento da lista de forma circular, ou seja, ela retira um elemento da lista de forma que o ultimo elemento aponte para o primeiro.