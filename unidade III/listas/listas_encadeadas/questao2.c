#include "lista.h"
#include <stdio.h>

int main(){
    Lista * lista = cria_lista();

    lista = insere_elemento(lista, 10);
    lista = insere_elemento(lista, 20);
    lista = insere_elemento(lista, 30);
    lista = insere_elemento(lista, 40);
    lista = insere_elemento(lista, 50);
    
    ultimo(lista);

}