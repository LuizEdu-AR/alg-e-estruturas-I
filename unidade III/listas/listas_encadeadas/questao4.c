#include <stdio.h>
#include "lista.h"

int main(){
    Lista * lista = cria_lista();

    lista = insere_elemento(lista, 30);
    lista = insere_elemento(lista, 20);
    lista = insere_elemento(lista, 30);
    lista = insere_elemento(lista, 40);
    lista = insere_elemento(lista, 50);
    lista = insere_elemento(lista, 30);

    printf("Lista original: \n");
    imprime_lista(lista);
    
    printf("Retirando da lista o elemento 30\n");

    lista = retira_elemento(lista, 30);

    printf("Lista após retirar o elemento 30: \n");
    
    imprime_lista(lista);
}