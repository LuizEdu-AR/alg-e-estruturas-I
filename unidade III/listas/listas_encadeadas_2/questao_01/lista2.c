#include "lista2.h"
#include "stdio.h"
#include "stdlib.h"

struct lista2 {
    int info;
    struct lista2* ant;
    struct lista2* prox;
};

Lista2* lst2_cria(void) {
    return NULL;
}

void lst2_libera(Lista2* l) {
    Lista2* p = l;
    while (p != NULL) {
        Lista2* t = p->prox;
        free(p);
        p = t;
    }
}

Lista2* lst2_insere(Lista2* l, int v) {
    Lista2* novo = (Lista2*)malloc(sizeof(Lista2));
    novo->info = v;
    novo->prox = l;
    novo->ant = NULL;
    if (l != NULL) {
        l->ant = novo;
    }
    return novo;
}

Lista2* lst2_retira(Lista2* l, int v) {
    Lista2* p = lst2_busca(l, v);
    if (p == NULL) {
        return l;
    }
    if (l == p) {
        l = p->prox;
    } else {
        p->ant->prox = p->prox;
    }
    if (p->prox != NULL) {
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}

int lst2_vazia(Lista2* l) {
    return (l == NULL);
}

Lista2* lst2_busca(Lista2* l, int v) {
    Lista2* p;
    for (p = l; p != NULL; p = p->prox) {
        if (p->info == v) {
            return p;
        }
    }
    return NULL;
}

void lst2_imprime(Lista2* l) {
    Lista2* p;
    for (p = l; p != NULL; p = p->prox) {
        printf("%d ", p->info);
    }
    printf("\n");
}