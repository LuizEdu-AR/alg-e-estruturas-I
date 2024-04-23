#include <stdio.h>
#include "questao.h"

int main() {
    // Exemplo de uso da função lcirc_imprime
    Lista lista;
    No no1, no2, no3;

    no1.valor = 1;
    no2.valor = 2;
    no3.valor = 3;

    no1.proximo = &no2;
    no2.proximo = &no3;
    no3.proximo = &no1;

    lista.inicio = &no1;

    lcirc_imprime(&lista);

    return 0;
}