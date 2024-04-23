#include <stdio.h>
#include <stdlib.h>
#include "questao.h"

typedef struct No {
    int valor;
    struct No* proximo;
} No;

typedef struct Lista {
    No* inicio;
} Lista;

void lcirc_imprime(Lista* l) {
    if (l == NULL || l->inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No* atual = l->inicio;
    do {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    } while (atual != l->inicio);
    printf("\n");
}