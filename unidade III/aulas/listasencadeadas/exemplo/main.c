#include "lista.h"

int main(void)
{
    Lista * lista = cria_lista();
    lista = insere__elementos(lista, 4);
    lista = insere__elementos(lista, 2);
    lista = insere__elementos(lista, 1);
    lista = insere__elementos(lista, 3);
    lista = insere__elementos(lista, 8);

    imprime(lista);
    verificalista(lista);
    lista = BuscarLista(lista, 2);
    return 0;
}