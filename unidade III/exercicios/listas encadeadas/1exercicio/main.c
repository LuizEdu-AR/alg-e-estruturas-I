#include "lista.h"

int main(void)
{
    Lista * lista = cria_lista();
    int NumDigit = 0;

    while(Numdigit != 999)
    {
        printf("Digite um numero para adicionar na lista:\n");
        scanf("%d",&NumDigit);
        lista = insere__elementos(lista, NumDigit);
    }

    imprime(lista);
    verificalista(lista);
    lista = BuscarLista(lista, 2);
    return 0;
}