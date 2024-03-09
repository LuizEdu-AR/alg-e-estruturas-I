#include <stdio.h>
#include "lista.h"

int main(){
    Lista * lista1 = cria_lista();

    lista1 = insere_elemento(lista1, 10);
    lista1 = insere_elemento(lista1, 20);
    lista1 = insere_elemento(lista1, 30);

    Lista * lista2 = cria_lista();

    lista2 = insere_elemento(lista2, 40);
    lista2 = insere_elemento(lista2, 50);
    lista2 = insere_elemento(lista2, 60);

    lista1 = concatena(lista1, lista2);

    printf("Lista concatenada: \n");
    imprime_lista(lista1);

}